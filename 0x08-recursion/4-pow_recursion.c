#include "main.h"

/**
 * _pow_recursion - Function that returns value of x raised to power of y
 * @x: digit to be raised
 * @y: power
 * Return: -1 if y lower than 0
 */
int _pow_recursion(int x, int y)
{
	int ans = x;

	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	ans *= _pow_recursion(x, y - 1);

	return (ans);
}
