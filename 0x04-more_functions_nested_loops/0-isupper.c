#include "main.h"
/**
 * _isupper - Entry point
 * Description: Check for uppercase letters
 * Return: 1 if upper, 0 if otherwise
 * @c: character for function
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
