#include "main.h"

/**
 * _puts - Entry point
 * @str: Pointer
 * Description: Prints a string
 */
void _puts(char *str)
{
	int i;

	_putchar('"');
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('"');
	_putchar('\n');

}
