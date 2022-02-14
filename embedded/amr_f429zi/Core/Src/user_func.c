/*
 * user_func.c
 *
 *  Created on: Feb 14, 2022
 *      Author: JeHee Yu
 */
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

#include "user_func.h"
#include "main.h"
#include "usart.h"

void vprint(const char *fmt, va_list argp) {
	char string[200];
	if (0 < vsprintf(string, fmt, argp))
			{
		HAL_UART_Transmit(&huart3, (uint8_t*) string, strlen(string), 0xffffff);
	}
}

void User_Printf(const char *fmt, ...)
{
	va_list argp;
	va_start(argp, fmt);
	vprint(fmt, argp);
	va_end(argp);
}

