#include "main.h"

/**
 * print_line - Entry point
 * Description: Print line n times
 * @n: Character to print
 */
void print_line(int n)
{
	int sl;

	while (sl < n && n > 0)
	{
		_putchar('_');
		sl++;
	}
	_putchar('\n');
}
