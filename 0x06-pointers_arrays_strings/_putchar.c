#include <unistd.h>

/**
 * _putchar - Prints character to stdout
 *
 * @c: Character to print
 *
 * Return: 1 on success or -1 with stderr set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
