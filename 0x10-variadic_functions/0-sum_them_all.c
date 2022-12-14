#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its parametres.
 * @n: Number of parametres passed to the function.
 *
 * Return: If n == 0 - 0.
 *	otherwise, the sum of all his parametres.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);

	va_start(nums, n);
	for (i = 0; i < n; i++)
		sum += va_arg(nums, int);

	va_end(nums);
	return (sum);
}
