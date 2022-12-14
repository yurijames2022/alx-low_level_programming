#include "main.h"

/**
 * print_sign - Entry point
 * @n: integer to print sign
 * Description: Prints sign of numbers
 * Return: 0, 1 or -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
	}
	if (n < 0)
	{
		_putchar('-');
	}
	return (0);
}
