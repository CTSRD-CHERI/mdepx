/*-
 * Copyright (c) 2019 Ruslan Bukin <br@bsdpad.com>
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

#ifndef _DEV_UART_UART_16550_H
#define _DEV_UART_UART_16550_H

#define	REG_DATA	0x00 /* data register (rw) */
#define	REG_IER		0x04 /* interrupt enable register (wo) */
#define	REG_IIR		0x08 /* interrupt identification register (ro) */
#define	REG_LCR		0x0C /* line control register (rw) */
#define	 LCR_BITS_S	0
#define	 LCR_BITS_M	(0x3 << LCR_BITS_S)
#define	 LCR_BITS_8	(0x3 << LCR_BITS_S)
#define	 LCR_STOPB	(1 << 2)
#define	 LCR_DLAB	(1 << 7)
#define	REG_MCR		0x10 /* modem control register (rw) */
#define	 MCR_RTS	(1 << 1)
#define	REG_LSR		0x14 /* line status register (rw) */
#define	 LSR_THRE	(1 << 5)
#define	REG_MSR		0x18 /* modem status register (rw) */
#define REG_SCR		0x1C /* scratch register (rw) */

#define	REG_DLL		0x00 /* divisor latch low (rw) */
#define	REG_DLM		0x04 /* divisor latch high (rw) */

struct uart_16550_softc {
	uint32_t base;
};

int uart_16550_init(struct uart_16550_softc *sc, uint32_t base,
    uint32_t uart_freq, uint32_t baud_rate);
void uart_16550_putc(struct uart_16550_softc *sc, char c);

#endif /* !_DEV_UART_UART_16550_H */