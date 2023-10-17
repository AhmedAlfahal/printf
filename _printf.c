#include "main.h"

/**
*	_printf - memic the funtion from the standard library (printf)
*
*	@format: char *
*
*	Return: how many characters that printed
**/


int _printf(const char *format, ...)
{
	va_list	mylist;
	int		i;
	int		counter;

	if (!format)
		return (-1);
	i = 0;
	counter = 0;
	va_start(mylist, format);
	while (format[i])
	{
		if (format[i] != '%')
			counter += _putchr(format[i], 0);
		else if (format[i++] == '%')
		{
			counter += _printing_detection(format[i], mylist);
			i++;
		}
	}
	va_end(mylist);
	return (counter);
}
