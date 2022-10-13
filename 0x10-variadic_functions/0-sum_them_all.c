#include "variadic_functions_h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its parametres.
 * @n: Number of parametres.
 *
 * Return: 0, if n == 0
 * otherwise, the sum of all parametres.
 */
int sum_them_all(const unsigned int n, ...);
{
	va_list nums;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);

	va_start(nums, n);
	for (i = 0, i < n, i++)
		sum += va_arg(num, int);

	va_end(num);
	return (sum);
}
