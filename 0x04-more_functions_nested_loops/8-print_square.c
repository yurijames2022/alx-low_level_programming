#include "main.h"

/**
 * print_square - Entry point
 * Description: Prints square
 * @size: The character to print
 */
void print_square(int size)
{
	int i = 0;
	int j;

	for (i = 0; i <= size; i++)
	{
		for (j = 0; j <= size; j++)
		{
			j = i;

			_putchar('#');
		}
		_putchar('\n');
	}
}
