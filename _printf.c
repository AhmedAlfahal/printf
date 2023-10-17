#include "main.h"

/**
*	_strchr - find something inside the code
*
*	@s: string to set
*
*	@c: character to find in string
*
*	Return: pointer to the char
**/

char	*_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (0);
}

/**
*	_printf - memic the funtion from the standard library (printf)
*
*	@format: char *
*
*	Return: how many characters that printed
**/


int	_printf(const char *format, ...)
{
	va_list	atached_arg;
	char	*p;
	char	*cases;
	int		i;
	int		n;

	if (!format)
		return (-1);
	p = (char *)format;
	cases = "csdibuoxXpRrS%";
	i = -1;
	n = 0;
	va_start(atached_arg, format);
	while (p[++i])
	{
		if (p[i] == '%' && _strchr(cases, p[i + 1]))
		{
			i++;
			if (!p[i])
				return (-1);
			n += _printing_detection(p[i], atached_arg);
		}
		else
		{
			write(1, &p[i], 1);
			n++;
		}
	}
	va_end(atached_arg);
	return (n);
}
