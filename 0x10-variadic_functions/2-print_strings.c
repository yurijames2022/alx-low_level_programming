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
	va_list vargs;
	unsigned int i;
	char *string;

	va_start(vargs, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(vargs, char*);

		if (string == NULL)
		{
			printf("(nil)");
		}
		else
		{

		printf("%s", string);
		}
		if (separator != NULL && i != (n - 1))
		{
			printf("%s", separator);
		}
	}

	printf("\n");
	va_end(vargs);

}
