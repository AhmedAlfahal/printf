#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int	_printf_putchr(char chr);
int	_putstr(char *str);
int	_printing_detection(char s, va_list mylist);

#endif