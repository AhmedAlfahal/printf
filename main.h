#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int	_putstr(char *str);
int	_printing_detection(char s, va_list mylist);
int	_putnbr(int nb);
int	_hexa(unsigned long nb, int base);
int	_putunbr(unsigned long nb);
int	_binary(unsigned int v, unsigned int base);
int	_pointer(unsigned long p);
int	_rev(char *p);
int	_rot13(char *p);
int	_putchr(char chr, int rot);


#endif
