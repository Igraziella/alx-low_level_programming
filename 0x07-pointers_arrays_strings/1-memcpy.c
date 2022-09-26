#include "main.h"

/**
 * _memcpy - Copies memory area
 * @src: source to copy from
 * @dest: destination to write to
 * @n: Number of bytes to be copied
 *
 * Return: pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr = dest;

	while (n--)
		*ptr++ = *src++;
	return (dest);
}
