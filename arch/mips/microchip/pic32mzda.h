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

#ifndef	_MIPS_MICROCHIP_PIC32MZDA_H_
#define	_MIPS_MICROCHIP_PIC32MZDA_H_

#include <mips/microchip/pic32.h>
#include <mips/microchip/pic32mz.h>
#include <mips/microchip/pic32_uart.h>
#include <mips/microchip/pic32_timer.h>
#include <mips/microchip/pic32_intc.h>
#include <mips/microchip/pic32_spi.h>
#include <mips/microchip/pic32_pps.h>
#include <mips/microchip/pic32_port.h>
#include <mips/microchip/pic32_syscfg.h>
#include <mips/microchip/pic32_ddr.h>

/* Register map */
#define	DDR_BASE			0xBF8E8000

/* Interrupt controller */
#define	_CORE_TIMER_VECTOR		0
#define	_CORE_SOFTWARE_0_VECTOR		1
#define	_CORE_SOFTWARE_1_VECTOR		2
#define	_EXTERNAL_0_VECTOR		3
#define	_TIMER_1_VECTOR			4
#define	_INPUT_CAPTURE_1_ERROR_VECTOR	5
#define	_INPUT_CAPTURE_1_VECTOR		6
#define	_OUTPUT_COMPARE_1_VECTOR	7
#define	_EXTERNAL_1_VECTOR		8
#define	_TIMER_2_VECTOR			9
#define	_INPUT_CAPTURE_2_ERROR_VECTOR	10
#define	_INPUT_CAPTURE_2_VECTOR		11
#define	_OUTPUT_COMPARE_2_VECTOR	12
#define	_EXTERNAL_2_VECTOR		13
#define	_TIMER_3_VECTOR			14
#define	_INPUT_CAPTURE_3_ERROR_VECTOR	15
#define	_INPUT_CAPTURE_3_VECTOR		16
#define	_OUTPUT_COMPARE_3_VECTOR	17
#define	_EXTERNAL_3_VECTOR		18
#define	_TIMER_4_VECTOR			19
#define	_INPUT_CAPTURE_4_ERROR_VECTOR	20
#define	_INPUT_CAPTURE_4_VECTOR		21
#define	_OUTPUT_COMPARE_4_VECTOR	22
#define	_EXTERNAL_4_VECTOR		23
#define	_TIMER_5_VECTOR			24
#define	_INPUT_CAPTURE_5_ERROR_VECTOR	25
#define	_INPUT_CAPTURE_5_VECTOR		26
#define	_OUTPUT_COMPARE_5_VECTOR	27
#define	_TIMER_6_VECTOR			28
#define	_INPUT_CAPTURE_6_ERROR_VECTOR	29
#define	_INPUT_CAPTURE_6_VECTOR		30
#define	_OUTPUT_COMPARE_6_VECTOR	31
#define	_TIMER_7_VECTOR			32
#define	_INPUT_CAPTURE_7_ERROR_VECTOR	33
#define	_INPUT_CAPTURE_7_VECTOR		34
#define	_OUTPUT_COMPARE_7_VECTOR	35
#define	_TIMER_8_VECTOR			36
#define	_INPUT_CAPTURE_8_ERROR_VECTOR	37
#define	_INPUT_CAPTURE_8_VECTOR		38
#define	_OUTPUT_COMPARE_8_VECTOR	39
#define	_TIMER_9_VECTOR			40
#define	_INPUT_CAPTURE_9_ERROR_VECTOR	41
#define	_INPUT_CAPTURE_9_VECTOR		42
#define	_OUTPUT_COMPARE_9_VECTOR	43
#define	_ADC_VECTOR			44
#define	_ADC_FIFO_VECTOR		45
#define	_ADC_DC1_VECTOR			46
#define	_ADC_DC2_VECTOR			47
#define	_ADC_DC3_VECTOR			48
#define	_ADC_DC4_VECTOR			49
#define	_ADC_DC5_VECTOR			50
#define	_ADC_DC6_VECTOR			51
#define	_ADC_DF1_VECTOR			52
#define	_ADC_DF2_VECTOR			53
#define	_ADC_DF3_VECTOR			54
#define	_ADC_DF4_VECTOR			55
#define	_ADC_DF5_VECTOR			56
#define	_ADC_DF6_VECTOR			57
#define	_ADC_FAULT_VECTOR		58
#define	_ADC_DATA0_VECTOR		59
#define	_ADC_DATA1_VECTOR		60
#define	_ADC_DATA2_VECTOR		61
#define	_ADC_DATA3_VECTOR		62
#define	_ADC_DATA4_VECTOR		63
#define	_ADC_DATA5_VECTOR		64
#define	_ADC_DATA6_VECTOR		65
#define	_ADC_DATA7_VECTOR		66
#define	_ADC_DATA8_VECTOR		67
#define	_ADC_DATA9_VECTOR		68
#define	_ADC_DATA10_VECTOR		69
#define	_ADC_DATA11_VECTOR		70
#define	_ADC_DATA12_VECTOR		71
#define	_ADC_DATA13_VECTOR		72
#define	_ADC_DATA14_VECTOR		73
#define	_ADC_DATA15_VECTOR		74
#define	_ADC_DATA16_VECTOR		75
#define	_ADC_DATA17_VECTOR		76
#define	_ADC_DATA18_VECTOR		77
#define	_ADC_DATA19_VECTOR		78
#define	_ADC_DATA20_VECTOR		79
#define	_ADC_DATA21_VECTOR		80
#define	_ADC_DATA22_VECTOR		81
#define	_ADC_DATA23_VECTOR		82
#define	_ADC_DATA24_VECTOR		83
#define	_ADC_DATA25_VECTOR		84
#define	_ADC_DATA26_VECTOR		85
#define	_ADC_DATA27_VECTOR		86
#define	_ADC_DATA28_VECTOR		87
#define	_ADC_DATA29_VECTOR		88
#define	_ADC_DATA30_VECTOR		89
#define	_ADC_DATA31_VECTOR		90
#define	_ADC_DATA32_VECTOR		91
#define	_ADC_DATA33_VECTOR		92
#define	_ADC_DATA34_VECTOR		93
#define	_ADC_DATA35_VECTOR		94
#define	_ADC_DATA36_VECTOR		95
#define	_ADC_DATA37_VECTOR		96
#define	_ADC_DATA38_VECTOR		97
#define	_ADC_DATA39_VECTOR		98
#define	_ADC_DATA40_VECTOR		99
#define	_ADC_DATA41_VECTOR		100
#define	_ADC_DATA42_VECTOR		101
#define	_ADC_DATA43_VECTOR		102
#define	_USB1_SR_VECTOR			103
#define	_CORE_PERF_COUNT_VECTOR		104
#define	_CORE_FAST_DEBUG_CHAN_VECTOR	105
#define	_SYSTEM_BUS_PROTECTION_VECTOR	106
#define	_CRYPTO_VECTOR			107
#define	_SPI1_FAULT_VECTOR		109
#define	_SPI1_RX_VECTOR			110
#define	_SPI1_TX_VECTOR			111
#define	_UART1_FAULT_VECTOR		112
#define	_UART1_RX_VECTOR		113
#define	_UART1_TX_VECTOR		114
#define	_I2C1_BUS_VECTOR		115
#define	_I2C1_SLAVE_VECTOR		116
#define	_I2C1_MASTER_VECTOR		117
#define	_CHANGE_NOTICE_A_VECTOR		118
#define	_CHANGE_NOTICE_B_VECTOR		119
#define	_CHANGE_NOTICE_C_VECTOR		120
#define	_CHANGE_NOTICE_D_VECTOR		121
#define	_CHANGE_NOTICE_E_VECTOR		122
#define	_CHANGE_NOTICE_F_VECTOR		123
#define	_CHANGE_NOTICE_G_VECTOR		124
#define	_CHANGE_NOTICE_H_VECTOR		125
#define	_CHANGE_NOTICE_J_VECTOR		126
#define	_CHANGE_NOTICE_K_VECTOR		127
#define	_PMP_VECTOR			128
#define	_PMP_ERROR_VECTOR		129
#define	_COMPARATOR_1_VECTOR		130
#define	_COMPARATOR_2_VECTOR		131
#define	_USB1_VECTOR			132
#define	_USB1_DMA_VECTOR		133
#define	_DMA0_VECTOR			134
#define	_DMA1_VECTOR			135
#define	_DMA2_VECTOR			136
#define	_DMA3_VECTOR			137
#define	_DMA4_VECTOR			138
#define	_DMA5_VECTOR			139
#define	_DMA6_VECTOR			140
#define	_DMA7_VECTOR			141
#define	_SPI2_FAULT_VECTOR		142
#define	_SPI2_RX_VECTOR			143
#define	_SPI2_TX_VECTOR			144
#define	_UART2_FAULT_VECTOR		145
#define	_UART2_RX_VECTOR		146
#define	_UART2_TX_VECTOR		147
#define	_I2C2_BUS_VECTOR		148
#define	_I2C2_SLAVE_VECTOR		149
#define	_I2C2_MASTER_VECTOR		150
#define	_CAN1_VECTOR			151
#define	_CAN2_VECTOR			152
#define	_ETHERNET_VECTOR		153
#define	_SPI3_FAULT_VECTOR		154
#define	_SPI3_RX_VECTOR			155
#define	_SPI3_TX_VECTOR			156
#define	_UART3_FAULT_VECTOR		157
#define	_UART3_RX_VECTOR		158
#define	_UART3_TX_VECTOR		159
#define	_I2C3_BUS_VECTOR		160
#define	_I2C3_SLAVE_VECTOR		161
#define	_I2C3_MASTER_VECTOR		162
#define	_SPI4_FAULT_VECTOR		163
#define	_SPI4_RX_VECTOR			164
#define	_SPI4_TX_VECTOR			165
#define	_RTCC_VECTOR			166
#define	_FLASH_CONTROL_VECTOR		167
#define	_PREFETCH_VECTOR		168
#define	_SQI1_VECTOR			169
#define	_UART4_FAULT_VECTOR		170
#define	_UART4_RX_VECTOR		171
#define	_UART4_TX_VECTOR		172
#define	_I2C4_BUS_VECTOR		173
#define	_I2C4_SLAVE_VECTOR		174
#define	_I2C4_MASTER_VECTOR		175
#define	_SPI5_FAULT_VECTOR		176
#define	_SPI5_RX_VECTOR			177
#define	_SPI5_TX_VECTOR			178
#define	_UART5_FAULT_VECTOR		179
#define	_UART5_RX_VECTOR		180
#define	_UART5_TX_VECTOR		181
#define	_I2C5_BUS_VECTOR		182
#define	_I2C5_SLAVE_VECTOR		183
#define	_I2C5_MASTER_VECTOR		184
#define	_SPI6_FAULT_VECTOR		185
#define	_SPI6_RX_VECTOR			186
#define	_SPI6_TX_VECTOR			187
#define	_UART6_FAULT_VECTOR		188
#define	_UART6_RX_VECTOR		189
#define	_UART6_TX_VECTOR		190
#define	_SDHC_VECTOR			191
#define	_GLCD_VECTOR			192
#define	_GPU_VECTOR			193
#define	_CTMU_VECTOR			195
#define	_ADC_EOS_VECTOR			196
#define	_ADC_ARDY_VECTOR		197
#define	_ADC_URDY_VECTOR		198
#define	_ADC0_EARLY_VECTOR		199
#define	_ADC1_EARLY_VECTOR		200
#define	_ADC2_EARLY_VECTOR		201
#define	_ADC3_EARLY_VECTOR		202
#define	_ADC4_EARLY_VECTOR		203
#define	_ADC_EARLY_VECTOR		205
#define	_ADC7_EARLY_VECTOR		206
#define	_ADC0_WARM_VECTOR		207
#define	_ADC1_WARM_VECTOR		208
#define	_ADC2_WARM_VECTOR		209
#define	_ADC3_WARM_VECTOR		210
#define	_ADC4_WARM_VECTOR		211
#define	_ADC7_WARM_VECTOR		214
#define	_MPLL_FAULT_VECTOR		215

/* Peripheral Pin Select */

/* Input Selection Set 2 */
#define	 IS2_RPD9	0b0000
#define	 IS2_RESERVED0	0b0001
#define	 IS2_RPB8	0b0010
#define	 IS2_RPB15	0b0011
#define	 IS2_RPD4	0b0100
#define	 IS2_RPB0	0b0101
#define	 IS2_RPE3	0b0110
#define	 IS2_RPB7	0b0111
#define	 IS2_RESERVED1	0b1000
#define	 IS2_RPF12	0b1001
#define	 IS2_RFD12	0b1010
#define	 IS2_RPF8	0b1011
#define	 IS2_RPC3	0b1100
#define	 IS2_RPE9	0b1101
#define	 IS2_RESERVED2	0b1110
#define	 IS2_RESERVED3	0b1111

/* Output Selection Set 0 */
#define	 OS0_NO_CONNECT	0b0000
#define	 OS0_U3TX	0b0001
#define	 OS0_U4RTS	0b0010
#define	 OS0_RESERVED0	0b0011
#define	 OS0_RESERVED1	0b0100
#define	 OS0_SDO1	0b0101
#define	 OS0_SDO2	0b0110
#define	 OS0_SDO3	0b0111
#define	 OS0_RESERVED2	0b1000
#define	 OS0_SDO5	0b1001
#define	 OS0_SS6	0b1010
#define	 OS0_OC3	0b1011
#define	 OS0_OC6	0b1100
#define	 OS0_REFCLKO4	0b1101
#define	 OS0_C2OUT	0b1110
#define	 OS0_C1TX	0b1111

/* Output Selection Set 1 */
#define	 OS1_NO_CONNECT	0b0000
#define	 OS1_U1TX	0b0001
#define	 OS1_U2RTS	0b0010
#define	 OS1_U5TX	0b0011
#define	 OS1_U6RTS	0b0100
#define	 OS1_SDO1	0b0101
#define	 OS1_SDO2	0b0110
#define	 OS1_SDO3	0b0111
#define	 OS1_SDO4	0b1000
#define	 OS1_SDO5	0b1001
#define	 OS1_RESERVED0	0b1010
#define	 OS1_OC4	0b1011
#define	 OS1_OC7	0b1100
#define	 OS1_RESERVED1	0b1101
#define	 OS1_RESERVED2	0b1110
#define	 OS1_REFCLKO1	0b1111

/* Output Selection Set 2 */
#define	 OS2_NO_CONNECT	0b0000
#define	 OS2_U3RTS	0b0001
#define	 OS2_U4TX	0b0010
#define	 OS2_RESERVED0	0b0011
#define	 OS2_U6TX	0b0100
#define	 OS2_SS1	0b0101
#define	 OS2_RESERVED1	0b0110
#define	 OS2_SS3	0b0111
#define	 OS2_SS4	0b1000
#define	 OS2_SS5	0b1001
#define	 OS2_SDO6	0b1010
#define	 OS2_OC5	0b1011
#define	 OS2_OC8	0b1100
#define	 OS2_RESERVED2	0b1101
#define	 OS2_C1OUT	0b1110
#define	 OS2_REFCLKO3	0b1111

/* Output Selection Set 3 */
#define	 OS3_NO_CONNECT	0b0000
#define	 OS3_U1RTS	0b0001
#define	 OS3_U2TX	0b0010
#define	 OS3_U5RTS	0b0011
#define	 OS3_U6TX	0b0100
#define	 OS3_RESERVED0	0b0101
#define	 OS3_SS2	0b0110
#define	 OS3_RESERVED1	0b0111
#define	 OS3_SDO4	0b1000
#define	 OS3_RESERVED2	0b1001
#define	 OS3_SDO6	0b1010
#define	 OS3_OC2	0b1011
#define	 OS3_OC1	0b1100
#define	 OS3_OC9	0b1101
#define	 OS3_RESERVED3	0b1110
#define	 OS3_C2TX	0b1111

#endif /* !_MIPS_MICROCHIP_PIC32MZDA_H_ */
