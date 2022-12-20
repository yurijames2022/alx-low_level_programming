#include "main.h"

/**
 * _puts - Entry point
 * @str: Pointer
 * Description: Prints a string
 */
void _puts(char *str)
{
	int i;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');

}
