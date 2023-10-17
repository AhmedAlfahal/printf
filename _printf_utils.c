#include "main.h"

/**
*	_printf_putchr - prints the character
*
*	@chr: char
*
*	Return: the return of write function
**/

int	_printf_putchr(char chr)
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
		total += _printf_putchr(((char) va_arg(mylist, int)));
	else if (s == 's')
		total += _putstr(va_arg(mylist, char *));
	else if (s == '%')
		total += _printf_putchr('%');
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
		write(1, "(null)", 6);
		return (6);
	}
	while (*str)
		counter += _printf_putchr(*str++);
	return (counter);
}
