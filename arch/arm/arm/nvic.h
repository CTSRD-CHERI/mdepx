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

#ifndef _ARM_ARM_NVIC_H_
#define _ARM_ARM_NVIC_H_

#include <sys/device.h>

#include <machine/scs.h>

/*
 * Nested Vectored Interrupt Controller.
 * Offsets from System Control Space (SCS) base register.
 */

#define	NVIC_ISER(n)	(0x000 + 0x4 * (n)) /* Interrupt Set-enable Regs */
#define	NVIC_ICER(n)	(0x080 + 0x4 * (n)) /* Interrupt Clear-enable Regs */
#define	NVIC_ISPR(n)	(0x100 + 0x4 * (n)) /* Interrupt Set-pending Regs */
#define	NVIC_ICPR(n)	(0x180 + 0x4 * (n)) /* Interrupt Clear-pending Regs */
#define	NVIC_IABR(n)	(0x200 + 0x4 * (n)) /* Interrupt Active Bit Regs */
#define	NVIC_ITNS(n)	(0x280 + 0x4 * (n)) /* Interrupt Target Non-secure */
#define	NVIC_IPR(n)	(0x300 + 0x4 * (n)) /* Interrupt Priority Regs */
#define	NVIC_STIR	0xE00	/* Software Trigger Interrupt Register */

struct nvic_intr_entry {
	void (*handler) (void *arg, int irq);
	void *arg;
};

struct arm_nvic_softc {
	uint32_t base;
};

void arm_nvic_intr(uint32_t irq);

int arm_nvic_init(mdx_device_t dev, uint32_t base);
void arm_nvic_target_ns(mdx_device_t dev, uint32_t n, int secure);

#endif /* !_ARM_ARM_NVIC_H_ */
