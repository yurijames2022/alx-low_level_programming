#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Function that returns sum of all its parameters
 * @n: The last variable
 * Return: Returns 0 if n==0 and sum if success
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0;
	unsigned int i = 0;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);


	if (n == 0)
	{
		return (0);
	}


	return (sum);
}
