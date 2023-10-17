#ifndef PRINTF_H
#define PRINTF_H

#include <stdarg.h>
#include <unistd.h>

int		_printf(const char *s1, ...);
int		_printf_putchr(char chr);
#endif