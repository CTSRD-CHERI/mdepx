/*-
 * Copyright (c) 2018 Ruslan Bukin <br@bsdpad.com>
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

#ifndef _ARM_MAXIM_MAX32625_GPIO_H_
#define _ARM_MAXIM_MAX32625_GPIO_H_

enum pin_mode {
	MODE_HIGH_Z_WEAK_PULLUP,	/* For out=1, weak pullup. For out=0, high impedance. */
	MODE_OPEN_DRAIN,		/* For out=1, high impedance. For out=0, open drain. */
	MODE_OPEN_DRAIN_WEAK_PULLUP,	/* For out=1, weak pullup. For out=0, open drain. */
	MODE_RSRVD_0,
	MODE_NORMAL_HIGH_Z,		/* For out=1, high impedance. For out=0, high impedance. */
	MODE_NORMAL,			/* For out=1, normal drive high. For out=0, normal drive low. */
	MODE_SLOW_HIGH_Z,		/* For out=1, high impedance. For out=0, high impedance. */
	MODE_SLOW_DRIVE,		/* For out=1, slow drive high. For out=0, slow drive low. */
	MODE_FAST_HIGH_Z,		/* For out=1, high impedance. For out=0, high impedance. */
	MODE_FAST_DRIVE,		/* For out=1, fast drive high. For out=0, fast drive low. */
	MODE_HIGH_Z_WEAK_PULLDOWN,	/* For out=1, high impedance. For out=0, weak pulldown. */
	MODE_OPEN_SOURCE,		/* For out=1, normal drive high. For out=0, high impedance. */
	MODE_OPEN_SOURCE_WEAK_PULLDOWN,	/* For out=1, normal drive high. For out=0, weak pulldown. */
	MODE_RSRVD_1,
	MODE_RSRVD_2,
	MODE_HIGH_Z_INPUT_DISABLED,	/* For out=0/1, high impedance. Input receiver disabled. */
};

#define	GPIO_RST_MODE_P(n)	(0x000 + 0x4 * (n))	/* Port Pn Default (Power-On Reset) Output Drive Mode */
#define	GPIO_FREE_P(n)		(0x040 + 0x4 * (n))	/* Port Pn Free for GPIO Operation Flags */
#define	GPIO_OUT_MODE_P(n)	(0x080 + 0x4 * (n))	/* Port Pn GPIO Output Drive Mode */
#define	 OUT_MODE_PIN_S(n)	(0x4 * (n))
#define	 OUT_MODE_PIN_M(n)	(0xf << OUT_MODE_PIN_S(n))
#define	GPIO_OUT_VAL_P(n)	(0x0C0 + 0x4 * (n))	/* Port Pn GPIO Output Value */
#define	GPIO_FUNC_SEL_P(n)	(0x100 + 0x4 * (n))	/* Port Pn GPIO Function Select */
#define	GPIO_IN_MODE_P(n)	(0x140 + 0x4 * (n))	/* Port Pn GPIO Input Monitoring Mode */
#define	GPIO_IN_VAL_P(n)	(0x180 + 0x4 * (n))	/* Port Pn GPIO Input Value */
#define	GPIO_INT_MODE_P(n)	(0x1C0 + 0x4 * (n))	/* Port Pn Interrupt Detection Mode */
#define	GPIO_INTFL_P(n)		(0x200 + 0x4 * (n))	/* Port Pn Interrupt Flags */
#define	GPIO_INTEN_P(n)		(0x240 + 0x4 * (n))	/* Port Pn Interrupt Enables */

struct max32625_gpio_softc {
	uint32_t base;
};

void max32625_gpio_init(struct max32625_gpio_softc *sc, uint32_t base);
void max32625_gpio_mode(struct max32625_gpio_softc *sc,
    uint8_t port, uint8_t pin, enum pin_mode mode);
void max32625_gpio_out_val(struct max32625_gpio_softc *sc,
    uint8_t port, uint8_t pin, uint8_t val);

#endif /* !_ARM_MAXIM_MAX32625_GPIO_H_ */
