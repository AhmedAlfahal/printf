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
	int j =_printf("[%%%s%c]\n", "ahmed", 'v');
	int i = printf("[%%%s%c]\n", "ahmed", 'v');
	printf("original:	%d\nmine:		%d\n", i, j);
    return (0);
}