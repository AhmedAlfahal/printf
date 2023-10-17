#include "main.h"

/**
*	_putchr - prints the character
*
*	@chr: char
*
*	Return: the return of write function
**/

int	_putchr(char chr)
{
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
		total += _putchr(((char) va_arg(mylist, int)));
	else if (s == 's')
		total += _putstr(va_arg(mylist, char *));
	else if (s == '%')
		total += _putchr('%');
	else if (s == 'i' || s == 'd')
		total += _putnbr(va_arg(mylist, int));
	else if (s == 'x')
		total += _hexa(va_arg(mylist, unsigned int), 'W');
	else if (s == 'X')
		total += _hexa(va_arg(mylist, unsigned int), '7');
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
	int	counter;

	counter = 0;
	if (str == NULL)
	{
		write(1, "(null)", 7);
		return (6);
	}
	while (*str)
	{
		if (*str < 32 || *str >= 127)
		{
			write(1, "\\", 1);
			write(1, "x", 1);
			counter = counter + 2;
			if (*str < 16)
			{
				write(1, "0", 1);
				counter++;
			}
			counter = counter + _hexa(*str, '7');
		}

		counter += _putchr(*str++);
	}
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
	int	counter;

	counter = 0;
	if (nb == -2147483648)
	{
		counter += _putnbr(nb / 10);
		counter += _putchr('8');
	}
	else if (nb >= 10)
	{
		counter += _putnbr(nb / 10);
		counter += _putchr((nb % 10) + '0');
	}
	else if (nb < 0)
	{
		counter += _putchr('-');
		counter += _putnbr(nb / -1);
	}
	else
		counter += _putchr(nb + '0');
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

int	_hexa(unsigned int nb, int base)
{
	int				tmp;
	int				counter;

	counter = 0;
	if (nb > 15)
		counter += _hexa(nb / 16, base);
	tmp = nb % 16;
	if (tmp < 10)
		counter += _putchr(tmp + '0');
	else if (tmp >= 10)
		counter += _putchr(tmp + base);
	return (counter);
}
