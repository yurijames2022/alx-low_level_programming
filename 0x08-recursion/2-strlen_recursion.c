#include "main.h"

/**
 * _strlen_recursion - This is a function that returns the length of a string
 * @s: The pointer to the string
 * Return: returns length of string
 */

int _strlen_recursion(char *s)
{

	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
