#include "main.h"
/**
 * print_alphabet_x10 - Prints lowercase alphabets x10
 *
 */

void print_alphabet_x10(void)

{
	int alpha;
	int alpha2;

	for (alpha = 0; alpha <= 9; alpha++)
	{
		for (alpha2 = 'a'; alpha2 <= 'z'; alpha++)
		{
			_putchar(alpha2);
		}
		_putchar('\n');
	}
}
