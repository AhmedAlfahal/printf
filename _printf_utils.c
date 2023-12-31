#include "main.h"

/**
*	_putchr - prints the character
*
*	@chr: char
*
*	@rot: int
*
*	Return: the return of write function
**/

int	_putchr(char chr, int rot)
{
	if (rot == 1)
	{
		if ((chr <= 'M' && chr >= 'A') || (chr <= 'm' && chr >= 'a'))
			chr = chr + 13 % 26;
		else if ((chr >= 'N' && chr <= 'Z') || (chr >= 'n' && chr <= 'z'))
		chr = chr - 13 % 26;
	}
	return (write(1, &chr, 1));
}

/**
*	_printing_detection - detect what is after the % and print it there
*
*	@s: char
*
*	@mylist: va_list
*
*	Return: the total chracters printed.
**/

int	_printing_detection(char s, va_list mylist)
{
	int	total;

	total = 0;
	if (s == 'c')
		total += _putchr(((char) va_arg(mylist, int)), 0);
	else if (s == 's')
		total += _putstr(va_arg(mylist, char *));
	else if (s == '%')
		total += _putchr('%', 0);
	else if (s == 'i' || s == 'd')
		total += _putnbr(va_arg(mylist, int));
	else if (s == 'x')
		total += _hexa(va_arg(mylist, unsigned int), 'W');
	else if (s == 'X')
		total += _hexa(va_arg(mylist, unsigned int), '7');
	else if (s == 'u')
		total += _putunbr(va_arg(mylist, unsigned int));
	else if (s == 'b')
		total += _binary(va_arg(mylist, unsigned int), 2);
	else if (s == 'o')
		total += _binary(va_arg(mylist, unsigned int), 8);
	else if (s == 'p')
		total += _pointer(va_arg(mylist, unsigned long));
	else if (s == 'r')
		total += _rev(va_arg(mylist, char *));
	else if (s == 'R')
		total += _rot13(va_arg(mylist, char *));
	return (total);
}

/**
*	_putstr - prints string
*
*	@str: char *
*
*	Return: number of printed character
**/

int	_putstr(char *str)
{
	int	counter = 0;

	if (!str)
		return (write(1, "(null)", 6));
	while (*str)
		counter += _putchr(*str++, 0);
	return (counter);
}

/**
*	_putnbr - prints the number
*
*	@nb: int
*
*	Return: number of printed character
**/

int	_putnbr(int nb)
{
	int	counter = 0;

	if (nb == -2147483648)
	{
		counter += _putnbr(nb / 10);
		counter += _putchr('8', 0);
	}
	else if (nb >= 10)
	{
		counter += _putnbr(nb / 10);
		counter += _putchr((nb % 10) + '0', 0);
	}
	else if (nb < 0)
	{
		counter += _putchr('-', 0);
		counter += _putnbr(nb / -1);
	}
	else
		counter += _putchr(nb + '0', 0);
	return (counter);
}

/**
*	_hexa - prints string
*
*	@nb: unsigned int
*
*	@base: int
*
*	Return: number of printed character
**/

int	_hexa(unsigned long nb, int base)
{
	int				tmp;
	int				counter;

	counter = 0;
	if (nb > 15)
		counter += _hexa(nb / 16, base);
	tmp = nb % 16;
	if (tmp < 10)
		counter += _putchr(tmp + '0', 0);
	else if (tmp >= 10)
		counter += _putchr(tmp + base, 0);
	return (counter);
}
