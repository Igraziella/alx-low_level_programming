#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of
 *			integers using linear search algorithm.
 * @array: pointer to the first element
 * @size: the number of elements in array
 * @value: value to search for
 *
 * Return: -1, if value is not present in the array or if array is NULL
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array != NULL)

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

		/* check to see if index i is equal to the search value */
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
