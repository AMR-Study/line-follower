/*
 * usr_func.h
 *
 *  Created on: Feb 14, 2022
 *      Author: JeHee Yu
 */

#ifndef INC_USER_FUNC_H_
#define INC_USER_FUNC_H_

#include <stdio.h>
#include <stdarg.h>
#include <string.h>

int _write(int file, char *p, int len);
void User_Printf(const char *fmt, ...);
void vprint(const char *fmt, va_list argp);

#endif /* INC_USER_FUNC_H_ */
