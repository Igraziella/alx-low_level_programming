#include "main.h"

/**
 * reverse_array - A function that reverses an array of integers.
 * @a: an input array.
 * @n: number of elements of array.
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int aux;

	while (i < n--)
	{
		aux = a[i];
		a[i++] = a[n];
		a[n] = aux;
	}
}
