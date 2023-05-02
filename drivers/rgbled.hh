#pragma once
#include "drivers/pin.hh"
#include "util/colors.hh"
#include "util/oscs.hh"

namespace mdrivlib
{

// MixedRgbLed: each color element can have a different
// LED driver (e.g. PWM, DAC, external chip)
// Todo: use concepts to ensure LedT all have .set();
template<typename RLedT, typename GLedT, typename BLedT, unsigned UpdateRateHz = 1000>
struct MixedRgbLed {

	MixedRgbLed() = default;
	// : r_{}
	// , g_{}
	// , b_{} {
	// }

	MixedRgbLed(RLedT r_LED, GLedT g_LED, BLedT b_LED)
		: r_(r_LED)
		, g_(g_LED)
		, b_(b_LED) {
	}

	void set_base_color(Color const &col) {
		background_color_ = col;
	}
	void blend_base_color(Color col) {
		background_color_ = background_color_.blend(col);
	}
	void add_base_color(Color col) {
		background_color_ = background_color_ + col;
	}
	// void set_solid(Color const &col) { solid_color_ = col; }

	void flash_once_ms(Color const &c, float ms) {
		flash_color_ = c;
		flash_phase_ = 0xFFFFFFFF;
		flash_rate_ = (float)(0xFFFFFFFFU / UpdateRateHz) / (ms / 1000.f);
	}

	void fade_once_ms(Color const &c, float ms) {
		fade_color_ = c;
		fade_phase_ = 0xFFFFFFFF;
		fade_rate_ = (float)(0xFFFFFFFFU / UpdateRateHz) / (ms / 1000.f);
	}

	// void breathe(Color const &c, const uint32_t freq) {
	// 	breathe_color_ = c;
	// 	fader_.set_frequency(freq);
	// }

	// If update_animation() is called at the same rate as UpdateRateHz, then freq will be in Hz.
	// Otherwise, actual freq will be freq * UpdateRateHz / Rate[update_animation() is called]
	void breathe(Color const &c, float freq) {
		breathe_color_ = c;
		fader_.set_frequency(freq);
	}

	void reset_breathe() {
		fader_.set_frequency(0);
		fader_.set_phase(0);
	}

	void set_color(Color const &col) const {
		r_.set(col.red());
		g_.set(col.green());
		b_.set(col.blue());
	}
	void set_color(Color const &col, uint8_t brightness) const {
		r_.set((col.red() * brightness) >> 8);
		g_.set((col.green() * brightness) >> 8);
		b_.set((col.blue() * brightness) >> 8);
	}
	void set_color(Color const &col, float brightness) const {
		r_.set(col.red() * brightness);
		g_.set(col.green() * brightness);
		b_.set(col.blue() * brightness);
	}

	void update_oscillators() {
		fader_.update();
		if (flash_phase_ > flash_rate_) {
			flash_phase_ -= flash_rate_;
		} else {
			flash_phase_ = 0;
		}
		if (fade_phase_ > fade_rate_) {
			fade_phase_ -= fade_rate_;
		} else {
			fade_phase_ = 0;
		}
	}

	// Todo: don't waste cycles updating if nothing's changed
	void update_animation() {
		update_oscillators();
		Color c = background_color_;
		if (flash_phase_)
			c = flash_color_;
		else if (fade_phase_)
			c = c.blend(fade_color_, fade_phase_);
		else
			c = c.blend(breathe_color_, fader_.val());
		// c = c.adjust(color_cal_);
		set_color(c);
	}

private:
	const RLedT r_;
	const GLedT g_;
	const BLedT b_;
	TriangleOscillator<UpdateRateHz> fader_;
	Color background_color_ = Colors::off;
	Color flash_color_ = Colors::white;
	Color fade_color_ = Colors::red;
	Color breathe_color_ = Colors::red;
	uint32_t flash_rate_ = 100;
	uint32_t flash_phase_ = 0;
	uint32_t fade_rate_ = 100;
	uint32_t fade_phase_ = 0;
	//    Color::Adjustment& color_cal_;
};

//"Normal" RGB LED where each element has the same type of LED driver
template<typename LedType, unsigned UpdateRateHz = 1000>
using RgbLed = MixedRgbLed<LedType, LedType, LedType, UpdateRateHz>;

//LED where value > 50% turns it on, otherwise off

template<mdrivlib::GPIO Gpio, uint8_t PinNum, PinPolarity Polarity = PinPolarity::Normal>
struct Led50 : FPin<Gpio, PinNum, PinMode::Output, Polarity> {
	static void set(uint8_t val) {
		FPin<Gpio, PinNum, PinMode::Output, Polarity>::set(val > 0x7F);
	}
};

} // namespace mdrivlib
