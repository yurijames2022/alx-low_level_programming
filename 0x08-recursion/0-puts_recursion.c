#include "main.h"

/**
 * _puts_recursion - Function that prints a string folowed by new line
 * @s - Pointer
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_puts_recursion(s + 1);
		_putchar(*s);
	}
}
