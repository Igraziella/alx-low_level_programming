#include "main.h"
/**
 * print alphabet - prints the alphabet in lowercase
 *
 * Return: Always 0 on success
 */

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
