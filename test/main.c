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
	int j =_printf("%x	%X	%X\n", 1, 12, 123456789);
	int i = printf("%x	%X	%X\n", 1, 12, 123456789);
	printf("%d	%d\n", i, j);
    return (0);
}