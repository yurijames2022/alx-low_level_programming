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
	int i = 0;

	for (i = 0; i <= 9; i++)
	{
		i = i + '0';
		if (n == i)
		{
			return (1);
		}
	}
	return (0);
}
