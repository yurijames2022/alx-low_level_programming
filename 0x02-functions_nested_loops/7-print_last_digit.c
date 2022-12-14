#include "main.h"

/**
 * print_last_digit - Entry point
 * @r: integer used to print last digit
 * Description: Program that prints the last digit
 * Return: returns i
 */
int print_last_digit(int r)
{
	if (r < 0)
	{
		r = r * -1;
	}
	r = r % 10;
	_putchar(r + '0');
	return (r);
}
