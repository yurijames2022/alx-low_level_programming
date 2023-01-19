#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - A function that prints a name
 * @name: The name to be printed
 * @f: A function pointer for printing name
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}

}
