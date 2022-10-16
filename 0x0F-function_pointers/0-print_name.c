#include "function_pointers.h"

/**
 * print_name - Prints a name
 * @name: Name to print
 * @f: Pointer to a function that prints a name
 */

void print_name(char *name, void (*f) (char *))
{
	if (!name || !f)
		return;
	f(name);
}
