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
	int j =_printf("[%u]\n", UINT_MAX);
	int i = printf("[%u]\n", UINT_MAX);
	printf("original:	%d\nmine:		%d\n", i, j);
    return (0);
}