#include "main.h"

/**
 * factorial - Returns factorial of a given number
 * @n: The number to get factorial of
 * Return: -1 if n is below 0, else return factorial of n
 */

int factorial(int n)
{

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}


	return (n * factorial(n - 1));

}
