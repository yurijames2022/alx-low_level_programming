#include "main.h"

/**
 * print_last_digit - Entry point
 * @r: integer used to print last digit
 * Description: Program that prints the last digit
 * Return: returns i
 */
int print_last_digit(int r)
{
	int lsd = r % 10;
	if (r < 0)
	{
		lsd = lsd * -1;
	}
	_putchar(lsd + '0');
	return (lsd);
}
