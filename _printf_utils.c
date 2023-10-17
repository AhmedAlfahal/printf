#include "_printf.h"

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
	if (s == 'd' || s == 'i')
		total += _putnbr(va_arg(mylist, int));
	else if (s == 'c')
		total += _printf_putchr(((char) va_arg(mylist, int)));
	else if (s == 's')
		total += _putstr(va_arg(mylist, char *));
	else if (s == 'u')
		total += _printf_putunbr(va_arg(mylist, unsigned int));
	else if (s == 'x')
		total += _printf_hexa(va_arg(mylist, unsigned int), 'W');
	else if (s == 'X')
		total += _printf_hexa(va_arg(mylist, unsigned int), '7');
	else if (s == 'p')
	{
		total += _putstr("0x");
		total += _printf_pntr(va_arg(mylist, unsigned long));
	}
	else if (s == '%')
		total += _printf_putchr('%');
	return (total);
}
