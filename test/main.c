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
	int j = _printf("%%%");
	int i = _printf("%%%");
	printf("original:	%d\nmine:		%d\n", i, j);
    return (0);
}