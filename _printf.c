#include "_printf.h"

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
	}
	va_end(mylist);
	return (counter);
}