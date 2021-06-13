/*-
 * Copyright (c) 2021 Ruslan Bukin <br@bsdpad.com>
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

#ifndef	_ARM_RASPBERRYPI_RP2040_H_
#define	_ARM_RASPBERRYPI_RP2040_H_

#include <arm/raspberrypi/rp2040_clocks.h>
#include <arm/raspberrypi/rp2040_io_bank0.h>
#include <arm/raspberrypi/rp2040_pads_bank0.h>
#include <arm/raspberrypi/rp2040_resets.h>
#include <arm/raspberrypi/rp2040_sio.h>
#include <arm/raspberrypi/rp2040_timer.h>
#include <arm/raspberrypi/rp2040_uart.h>

#define	RP2040_ROM_BASE			0x00000000
#define	RP2040_XIP_BASE			0x10000000
#define	RP2040_XIP_MAIN_BASE		0x10000000
#define	RP2040_XIP_NOALLOC_BASE		0x11000000
#define	RP2040_XIP_NOCACHE_BASE		0x12000000
#define	RP2040_XIP_NOCACHE_NOALLOC_BASE	0x13000000
#define	RP2040_XIP_CTRL_BASE		0x14000000
#define	RP2040_XIP_SRAM_BASE		0x15000000
#define	RP2040_XIP_SRAM_END		0x15004000
#define	RP2040_XIP_SSI_BASE		0x18000000
#define	RP2040_SRAM_BASE		0x20000000
#define	RP2040_SRAM_STRIPED_BASE	0x20000000
#define	RP2040_SRAM_STRIPED_END		0x20040000
#define	RP2040_SRAM4_BASE		0x20040000
#define	RP2040_SRAM5_BASE		0x20041000
#define	RP2040_SRAM_END			0x20042000
#define	RP2040_SRAM0_BASE		0x21000000
#define	RP2040_SRAM1_BASE		0x21010000
#define	RP2040_SRAM2_BASE		0x21020000
#define	RP2040_SRAM3_BASE		0x21030000
#define	RP2040_SYSINFO_BASE		0x40000000
#define	RP2040_SYSCFG_BASE		0x40004000
#define	RP2040_CLOCKS_BASE		0x40008000
#define	RP2040_RESETS_BASE		0x4000c000
#define	RP2040_PSM_BASE			0x40010000
#define	RP2040_IO_BANK0_BASE		0x40014000
#define	RP2040_IO_QSPI_BASE		0x40018000
#define	RP2040_PADS_BANK0_BASE		0x4001c000
#define	RP2040_PADS_QSPI_BASE		0x40020000
#define	RP2040_XOSC_BASE		0x40024000
#define	RP2040_PLL_SYS_BASE		0x40028000
#define	RP2040_PLL_USB_BASE		0x4002c000
#define	RP2040_BUSCTRL_BASE		0x40030000
#define	RP2040_UART0_BASE		0x40034000
#define	RP2040_UART1_BASE		0x40038000
#define	RP2040_SPI0_BASE		0x4003c000
#define	RP2040_SPI1_BASE		0x40040000
#define	RP2040_I2C0_BASE		0x40044000
#define	RP2040_I2C1_BASE		0x40048000
#define	RP2040_ADC_BASE			0x4004c000
#define	RP2040_PWM_BASE			0x40050000
#define	RP2040_TIMER_BASE		0x40054000
#define	RP2040_WATCHDOG_BASE		0x40058000
#define	RP2040_RTC_BASE			0x4005c000
#define	RP2040_ROSC_BASE		0x40060000
#define	RP2040_VREG_AND_CHIP_RESET_BASE	0x40064000
#define	RP2040_TBMAN_BASE		0x4006c000
#define	RP2040_DMA_BASE			0x50000000
#define	RP2040_USBCTRL_DPRAM_BASE	0x50100000
#define	RP2040_USBCTRL_BASE		0x50100000
#define	RP2040_USBCTRL_REGS_BASE	0x50110000
#define	RP2040_PIO0_BASE		0x50200000
#define	RP2040_PIO1_BASE		0x50300000
#define	RP2040_XIP_AUX_BASE		0x50400000
#define	RP2040_SIO_BASE			0xd0000000
#define	RP2040_PPB_BASE			0xe0000000

#endif /* !_ARM_RASPBERRYPI_RP2040_H_ */
