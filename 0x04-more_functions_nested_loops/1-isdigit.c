#include "main.h"

/**
 * _isdigit - Entry point
 *
 * @n: digit for function
 * Description: Check for numeral value
 *
 * Return: 1 if true, 0 if false
 */
int _isdigit(int n)
{
	if (n >= '0' && n <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
