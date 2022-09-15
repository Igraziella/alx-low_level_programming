#include "main.h"
#include <stdio.h>

/**
 * print_times_table - Prints the n times table starting with 0.
 *@n: number to be multiplied
 * Return: nothing.
 */
void print_times_table(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		for (n * i)
			if (n > 15 || n < 0)
			{
				_putchar(' ');
				_putchar('\n');
			}
	}
}


