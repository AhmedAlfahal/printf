#include <limits.h>
#include <stdio.h>
#include "../main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char *s = NULL;
	int j =_printf(" %s\n", s);
	int i = printf(" %s\n", s);
	printf("%d	%d\n", i, j);
    return (0);
}