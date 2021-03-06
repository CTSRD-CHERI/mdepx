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

#ifndef _DEV_IT7259_IT7259_H_
#define	_DEV_IT7259_IT7259_H_

#define	IT7259_DEVICE_NAME		0x00
#define	IT7259_GET_CAP_SENSOR_INFO	0x01
#define	IT7259_SET_CAP_SENSOR_INFO	0x02
#define	IT7259_SET_POWER_MODE		0x04
#define	IT7259_GET_VARIABLE_VALUE	0x05
#define	IT7259_SET_VARIABLE_VALUE	0x06
#define	IT7259_RESET_QUEUE		0x07
#define	IT7259_ENTER_EXIT_PURE_CMD_MODE	0x08
#define	IT7259_SET_START_FLASH_OFFSET	0x09
#define	IT7259_READ_FLASH		0x0B
#define	IT7259_REINITIALIZE_FIRMWARE	0x0C
#define	IT7259_WRITE_MEMORY_REGISTER	0x0D
#define	IT7259_READ_MEMORY_REGISTER	0x0E
#define	IT7259_ENTER_EXIT_CHARGE_MODE	0x0F
#define	IT7259_ENTER_EXIT_GSM_MODE	0x10
#define	IT7259_GET_ALGORITHM_PARAM	0x14
#define	IT7259_SET_ALGORITHM_PARAM	0x15
#define	IT7259_WRITE_START		0x16
#define	IT7259_WRITE_CONTINUE		0x17
#define	IT7259_READ_START		0x18
#define	IT7259_READ_CONTINUE		0x19
#define	IT7259_FUNCTION_TEST		0x1A
#define	IT7259_AUTOTUNE_CDC		0x1C

#endif /* !_DEV_IT7259_IT7259_H_ */
