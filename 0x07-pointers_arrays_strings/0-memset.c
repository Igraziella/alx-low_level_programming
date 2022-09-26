#include "main.h"

/**
 * _memset - Fills memory with a constant byte
 * @b: character to write to memory
 * @s: memory locattion to start at
 * @n: number of bytes to write
 *
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n-- > 0)
		*ptr++ = b;
	return (s);
}
