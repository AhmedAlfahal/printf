#include "_printf.h"


/**
*	_printf - memic the funtion from the standard library (printf)
*
*	@s1: char *
*
*	Return: how many characters that printed
**/


int	_printf(const char *s1, ...)
{
	va_list	mylist;
	int		i;
	int		counter;

	i = 0;
	counter = 0;
	va_start(mylist, s1);
	while (s1[i] != 0)
	{
		if (s1[i] != '%')
			counter += _printf_putchr(s1[i]);
		if (s1[i++] == '%')
		{
			counter += _printing_detection(s1[i], mylist);
			i++;
		}
	}
	va_end(mylist);
	return (counter);
}
