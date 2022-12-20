#include "main.h"

/**
 * void_print_rev - Prints reverse
 * Description: This func is used to print strings in reverse
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i--;
	}

}
