#pragma once
#include "arch.hh"
#include "rcc.hh"
#include "spi_config_struct.hh"
#include "spi_registers.hh"
#include "util/math.hh"

template<typename ConfT>
class SpiPeriph {
public:
	static inline const unsigned N = ConfT::PeriphNum;
	template<unsigned M>
	using IER = typename target::SPI<N>::template IER<M>;
	template<unsigned M>
	using CR1 = typename target::SPI<N>::template CR1<M>;
	template<unsigned M>
	using CR2 = typename target::SPI<N>::template CR2<M>;
	template<unsigned M>
	using SR = typename target::SPI<N>::template SR<M>;
	template<unsigned M>
	using IFCR = typename target::SPI<N>::template IFCR<M>;
	template<unsigned M>
	using CFG1 = typename target::SPI<N>::template CFG1<M>;
	template<unsigned M>
	using CFG2 = typename target::SPI<N>::template CFG2<M>;

	SpiPeriph() {
	}

	void configure() {
		disable();

		Pin init_sclk{ConfT::SCLK, PinMode::Alt};
		Pin init_copi{ConfT::COPI, PinMode::Alt};
		Pin init_cipo{ConfT::CIPO, PinMode::Alt};

		bool _use_hardware_SS = ConfT::use_hardware_ss && (ConfT::NumChips == 1) && (ConfT::CS0.af > 0);

		if (_use_hardware_SS) {
			Pin init_nss{ConfT::CS0, PinMode::Alt};
			//    CFG2<SPI_CFG2_SSOE>::set();
		} else {
			//    CFG2<SPI_CFG2_SSOE>::clear();
			Pin init_cs0{ConfT::CS0, PinMode::Output};
			unselect<0>();
			if constexpr (ConfT::NumChips > 1) {
				Pin init_cs1{ConfT::CS1, PinMode::Output};
				unselect<1>();
			}
			if constexpr (ConfT::NumChips > 2) {
				Pin init_cs2{ConfT::CS2, PinMode::Output};
				unselect<2>();
			}
			if constexpr (ConfT::NumChips > 3) {
				Pin init_cs3{ConfT::CS3, PinMode::Output};
				unselect<3>();
			}
			static_assert(ConfT::NumChips <= 4, "SpiPeriph only supports selecting 1-4 chips");
		}

		target::RCC_Control::SPI<N>::Reg::set();

		// Todo: use our registers
		SPI_HandleTypeDef spih;
		if constexpr (N == 1)
			spih.Instance = SPI1;
		if constexpr (N == 2)
			spih.Instance = SPI2;
		if constexpr (N == 3)
			spih.Instance = SPI3;
		if constexpr (N == 4)
			spih.Instance = SPI4;
		if constexpr (N == 5)
			spih.Instance = SPI5;
		if constexpr (N == 6)
			spih.Instance = SPI6;
		spih.Init.Mode = SPI_MODE_MASTER;
		spih.Init.Direction = ConfT::data_dir == SpiDataDir::Duplex ? 0UL // SPI_DIRECTION_2LINES
							: ConfT::data_dir == SpiDataDir::TXOnly ? SPI_CFG2_COMM_0
							: ConfT::data_dir == SpiDataDir::RXOnly ? SPI_CFG2_COMM_1
																	: SPI_CFG2_COMM;
		spih.Init.DataSize = (ConfT::data_size & 0x001F) - 1;
		spih.Init.CLKPolarity = SPI_POLARITY_LOW;
		spih.Init.CLKPhase = SPI_PHASE_1EDGE;
		spih.Init.NSS = _use_hardware_SS ? SPI_NSS_HARD_OUTPUT : SPI_NSS_SOFT;
		spih.Init.BaudRatePrescaler = (MathTools::Log2Int(ConfT::clock_division) - 1) << 28;
		spih.Init.FirstBit = SPI_FIRSTBIT_MSB;
		spih.Init.TIMode = SPI_TIMODE_DISABLE;
		spih.Init.CRCCalculation = SPI_CRCCALCULATION_DISABLE;
		spih.Init.CRCPolynomial = 7;
		spih.Init.NSSPMode = SPI_NSS_PULSE_ENABLE; // works with ADC SPI in DISABLE
		spih.Init.NSSPolarity = SPI_NSS_POLARITY_LOW;
		spih.Init.FifoThreshold = SPI_FIFO_THRESHOLD_01DATA;
		spih.Init.TxCRCInitializationPattern = SPI_CRC_INITIALIZATION_ALL_ZERO_PATTERN;
		spih.Init.RxCRCInitializationPattern = SPI_CRC_INITIALIZATION_ALL_ZERO_PATTERN;
		spih.Init.MasterSSIdleness = SPI_MASTER_SS_IDLENESS_00CYCLE;			   // right?
		spih.Init.MasterInterDataIdleness = SPI_MASTER_INTERDATA_IDLENESS_00CYCLE; // right?
		spih.Init.MasterReceiverAutoSusp = SPI_MASTER_RX_AUTOSUSP_DISABLE;		   // what is this?
		spih.Init.MasterKeepIOState = SPI_MASTER_KEEP_IO_STATE_ENABLE; // what is this? Example code says "Recommended"
		spih.Init.IOSwap = SPI_IO_SWAP_DISABLE;
		HAL_SPI_Init(&spih);
	}

	void enable_RX_interrupt() {
		IER<SPI_IER_RXPIE>::set();
	}
	void disable_RX_interrupt() {
		IER<SPI_IER_RXPIE>::clear();
	}
	void enable_TX_interrupt() {
		IER<SPI_IER_TXPIE>::set();
	}
	void disable_TX_interrupt() {
		IER<SPI_IER_TXPIE>::clear();
	}
	void enable_duplex_interrupt() {
		IER<SPI_IER_DXPIE>::set();
	}
	void disable_duplex_interrupt() {
		IER<SPI_IER_DXPIE>::clear();
	}
	void enable_end_of_xfer_interrupt() {
		IER<SPI_IER_EOTIE>::set();
	}
	void disable_end_of_xfer_interrupt() {
		IER<SPI_IER_EOTIE>::clear();
	}
	void enable() {
		CR1<SPI_CR1_SPE>::set();
	}
	void disable() {
		CR1<SPI_CR1_SPE>::clear();
	}
	bool rx_packet_available() {
		return SR<SPI_SR_RXP>::read() ? true : false;
	}
	bool tx_space_available() {
		return SR<SPI_SR_TXP>::read() ? true : false;
	}
	bool duplex_space_available() {
		return SR<SPI_SR_DXP>::read() ? true : false;
	}
	bool is_end_of_transfer() {
		return SR<SPI_SR_EOT>::read() ? true : false;
	}
	bool is_tx_complete() {
		return SR<SPI_SR_TXC>::read() ? true : false;
	}
	void clear_EOT_flag() {
		IFCR<SPI_IFCR_EOTC>::set();
	}
	void clear_TXTF_flag() { // transmission transfer filled
		IFCR<SPI_IFCR_TXTFC>::set();
	}
	bool rx_fifo_not_empty() {
		return SR<SPI_SR_RXWNE>::read() ? true : false;
	}
	int rx_fifo_frames_left() {
		return SR<SPI_SR_RXPLVL>::read() >> SPI_SR_RXPLVL_Pos;
	}
	void set_tx_data_size(uint16_t num_packets) {
		CR2<SPI_CR2_TSIZE>::write(num_packets);
	}
	void load_tx_data(uint16_t data0, uint16_t data1) {
		target::SPI<N>::TXDR::write(data0 << 16 | data1);
	}
	void load_tx_data(uint32_t data) {
		target::SPI<N>::TXDR::write(data);
	}
	void start_transfer() {
		CR1<SPI_CR1_CSTART>::set();
	}
	uint16_t received_data() {
		return target::SPI<N>::RXDR::read();
	}

	template<int chip_num>
	void select() {
		if constexpr (chip_num == 0)
			FPin<ConfT::CS0.gpio, ConfT::CS0.pin, PinMode::Output>::low();
		if constexpr (chip_num == 1)
			FPin<ConfT::CS1.gpio, ConfT::CS1.pin, PinMode::Output>::low();
		if constexpr (chip_num == 2)
			FPin<ConfT::CS2.gpio, ConfT::CS2.pin, PinMode::Output>::low();
		if constexpr (chip_num == 3)
			FPin<ConfT::CS3.gpio, ConfT::CS3.pin, PinMode::Output>::low();
	}
	template<int chip_num>
	void unselect() {
		if constexpr (chip_num == 0)
			FPin<ConfT::CS0.gpio, ConfT::CS0.pin, PinMode::Output>::high();
		if constexpr (chip_num == 1)
			FPin<ConfT::CS1.gpio, ConfT::CS1.pin, PinMode::Output>::high();
		if constexpr (chip_num == 2)
			FPin<ConfT::CS2.gpio, ConfT::CS2.pin, PinMode::Output>::high();
		if constexpr (chip_num == 3)
			FPin<ConfT::CS3.gpio, ConfT::CS3.pin, PinMode::Output>::high();
	}
	void select(int chip_num) {
		if (chip_num == 0)
			select<0>();
		if (chip_num == 1)
			select<1>();
		if (chip_num == 2)
			select<2>();
		if (chip_num == 3)
			select<3>();
	}
	void unselect(int chip_num) {
		if (chip_num == 0)
			unselect<0>();
		if (chip_num == 1)
			unselect<1>();
		if (chip_num == 2)
			unselect<2>();
		if (chip_num == 3)
			unselect<3>();
	}

private:
	FPin<ConfT::CS0.gpio, ConfT::CS0.pin> CS0;
	FPin<ConfT::CS1.gpio, ConfT::CS1.pin> CS1;
	FPin<ConfT::CS2.gpio, ConfT::CS2.pin> CS2;
	FPin<ConfT::CS3.gpio, ConfT::CS3.pin> CS3;
};
// end spi.hh
