#include "main.h"

/**
 * puts2 - Prints even numbers
 * @str: Pointer
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i = i + 1;
		i++;
	}
	_putchar('\n');
}
