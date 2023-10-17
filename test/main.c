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
	int j = _printf(NULL);
	printf("original:	%d\n", j);
    return (0);
}