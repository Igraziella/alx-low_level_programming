#include "main.h"
#include <stdio.h>

/**
 * print_times_table - Prints the n times table starting with 0.
 *@n: number to be multiplied
 * Return: Always 0.
 */
void print_times_table(int n)
{
	int i;
	if (n > 15)
	{
		return;
	}
	if (n < 0)
	{
		return;
	}
	for (i = 0; i < n; i++)
	{
		_putchar(n * i);
		_putchar('\n');
	}
	return;
}


