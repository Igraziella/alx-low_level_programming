#include "main.h"

/**
 * set_string - sets value of a pointer to a char
 * @s: pointer to pointer to set
 * @to: point to set the pointer pointed to by s
 *
 * Return: void
 */
void set_spring(char **s, char *to)
{
	*s = to;
}
