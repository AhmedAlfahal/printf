#include "main.h"

/**
*	_putunbr - prints unsinged number
*
*	@nb: unsigned long
*
*	Return: number of printed character
**/

int	_putunbr(unsigned long nb)
{
	int	counter;

	counter = 0;
	if (nb >= 10)
	{
		counter += _putnbr(nb / 10);
		counter += _putchr((nb % 10) + '0', 0);
	}
	else
		counter += _putchr(nb + '0', 0);
	return (counter);
}

/**
*	_binary - prints binary
*
*	@v: unsigned char
*
*	@base: unsigned int
*
*	Return: number of printed character
**/

int	_binary(unsigned int v, unsigned int base)
{
	int		n;
	char	c;

	n = 0;
	if (v > base - 1)
		n += _binary(v / base, base);
	c = (v % base) + '0';
	n += _putchr(c, 0);
	return (n);
}

/**
*	_pointer - prints pointers
*
*	@p: unsigned long
*
*	Return: number of printed character
**/

int	_pointer(unsigned long p)
{
	int	n;

	if (p == 0)
		return (_putstr("(nil)"));
	n = _putstr("0x");
	n += _hexa(p, 'W');
	return (n);
}

/**
*	_rev - prints string reversing
*
*	@p: char *
*
*	Return: number of printed character
**/

int	_rev(char *p)
{
	int n = 0;

	if (!p)
		return (write(1, "(null)", 6));
	if (*p == 0)
		return (0);
	n += _rev(p + 1);
	n += write(1, p, 1);
	return (n);
}

/**
*	_rot13 - prints string in ROT13
*
*	@p: char *
*
*	Return: number of printed character
**/

int	_rot13(char *p)
{
	int n = 0;

	if (!p)
		return (write(1, "(null)", 6));
	if (*p == 0)
		return (0);
	n += _putchr(*p, 1);
	n += _rot13(p + 1);
	return (n);
}
