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
	int j =_printf("[%r]\n", s);
	printf("original:	%d\n", j);
    return (0);
}