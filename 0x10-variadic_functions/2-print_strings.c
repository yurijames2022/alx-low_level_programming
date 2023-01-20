#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints strings
 * @separator: The parameter to be used to separatate the parameter values
 * @n: The number of variadic arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;

	va_list vargs;

	va_start(vargs, n);

	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(vargs, char*));

		if (separator != NULL && i != (n - 1))
		{
			printf("%s", separator);
		}
	}

	printf("\n");

}
