#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int	_putchr(char chr);
int	_putstr(char *str);
int	_printing_detection(char s, va_list mylist);
int	_putnbr(int nb);
int	_hexa(unsigned int nb, int base);
int	_putunbr(unsigned long nb);
int	_binary(unsigned int v, int base);

#endif
