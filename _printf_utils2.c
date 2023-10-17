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
		counter += _putchr((nb % 10) + '0');
	}
	else
		counter += _putchr(nb + '0');
	return (counter);
}

/**
*	_binary - prints binary
*
*	@v: unsigned char
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
	n += _putchr(c);
	return (n);
}

int	_pntr(unsigned long nb)
{
	int	tmp;
	int	counter;

	counter = 0;
	if (nb > 15)
		counter += _pntr(nb / 16);
	tmp = nb % 16;
	if (tmp < 10)
		counter += _putchr(tmp + '0');
	else if (tmp >= 10)
		counter += _putchr(tmp + 'W');
	return (counter);
}
