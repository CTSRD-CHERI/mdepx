/*-
 * Copyright (c) 2020 Ruslan Bukin <br@bsdpad.com>
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

#include <sys/cdefs.h>

#include <riscv/kendryte/k210_gpiohs.h>

#define	RD4(_sc, _reg)		\
	*(volatile uint32_t *)((_sc)->base + _reg)
#define	WR4(_sc, _reg, _val)	\
	*(volatile uint32_t *)((_sc)->base + _reg) = _val

void
k210_gpiohs_set_dir(struct k210_gpiohs_softc *sc, int pin, int dir)
{
	uint32_t reg;

	reg = RD4(sc, GPIOHS_OUTPUT_ENABLE);
	if (dir)
		reg |= (1 << pin);
	else
		reg &= ~(1 << pin);
	WR4(sc, GPIOHS_OUTPUT_ENABLE, reg);

	reg = RD4(sc, GPIOHS_INPUT_ENABLE);
	if (dir)
		reg &= ~(1 << pin);
	else
		reg |= (1 << pin);
	WR4(sc, GPIOHS_INPUT_ENABLE, reg);
}

void
k210_gpiohs_set_pin(struct k210_gpiohs_softc *sc, int pin, int val)
{
	uint32_t reg;

	reg = RD4(sc, GPIOHS_OUTPUT_VALUE);
	if (val)
		reg |= (1 << pin);
	else
		reg &= ~(1 << pin);
	WR4(sc, GPIOHS_OUTPUT_VALUE, reg);
}

void
k210_gpiohs_init(struct k210_gpiohs_softc *sc, uint32_t base)
{

	sc->base = base;
}
