#include "function_pointers.h"

/**
 * int_index - Searches for an integer.
 * @array: The array of integers.
 * @size: Size of the number of elements in array.
 * @cmp: pointer to the function to be used to compare values.
 *
 * Return: If no element matches, return -1
 *		If size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
