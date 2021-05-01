#ifndef _DMA2D_TRANSFER_HH
#define _DMA2D_TRANSFER_HH

#include "interrupt.hh"
#include "rcc.hh"

namespace mdrivlib
{
namespace stm32mp1
{
namespace core_a7
{

struct DMA2DTransfer {
	static volatile inline bool is_dma2d_done = true;

	void init() {
	}

	void
	fillrect_rgb565(uintptr_t starting_addr, uint16_t width, uint16_t height, uint16_t screen_width, uint16_t color) {
		uint16_t *frameptr = reinterpret_cast<uint16_t *>(starting_addr);

		for (int y = 0; y < height; y++) {
			for (int x = 0; x < width; x++) {
				*frameptr = color;
				frameptr++;
			}
			frameptr += screen_width - width;
		}
	}
};
} // namespace core_a7
} // namespace stm32mp1
} // namespace mdrivlib

#endif
