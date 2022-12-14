#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the addition of positive numbers, followed by a new line.
 * @argc: The number of arguments in the program
 * @argv: An array of pointers to the arguments.
 *
 * Return: If no number is passed to the program - 0
 *	If one of the number contains symbols that are non digits - 1.
 */
int main(int argc, char *argv[])
{
	int num, digit, sum = 0;

	for (num = 1; num < argc; num++)
	{
		for (digit = 0; argv[num][digit]; digit++)
		{
			if (argv[num][digit] < '0' || argv[num][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[num]);
	}

	printf("%d\n", sum);

	return (0);
}
