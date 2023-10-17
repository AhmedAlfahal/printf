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
	char *s = "Hello";
	int j =_printf("[%p]\n", s);
	int i = printf("[%p]\n", s);
	printf("original:	%d\nmine:		%d\n", i, j);
    return (0);
}