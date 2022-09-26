#include "main.h"

/**
 * _strpbrk - locates the first occurence of bytes in accept
 * in string s.
 *
 * @s: string to search
 * @accept: character to look for.
 *
 * Return: Pointer to the firt occurence of accept in s
 */
char *_strpbrk(char *s, char *accept)
{
	char *ptr = accept;

	while (*s != 0)
	{
		if (*s == *ptr && *ptr != 0)
			return (s);
		ptr++;
		if (*ptr == 0)
		{
			ptr == accept;
			s++;
		}
	}
	return (0);
}
