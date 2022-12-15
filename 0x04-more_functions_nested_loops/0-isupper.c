#include "main.h"
/**
 * _isupper - Entry point
 * Description: Check for uppercase letters
 * Return: 1 if upper, 0 if otherwise
 * @c: character for function
 */
int _isupper(int c)
{
	int i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
		{
			return (1);
		}
		else if (c  != i)
		{
			return (0);
		}
	}
	return (c);

}
