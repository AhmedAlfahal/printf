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
	int j =_printf("%b\n", 98);
	printf("original:	%d\n",  j);
    return (0);
}