#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings, followed by a new line.
 * @n: number of strings passed to the function
 * @separator: string to be printed between the strings.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;
	char *str;

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(nums, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(nums);
}
