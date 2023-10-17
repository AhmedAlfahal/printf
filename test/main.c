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
	int j =_printf("[%R]\n", s);
	printf("original:	%d\n", j);
    return (0);
}