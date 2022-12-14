#include "main.h"

/**
 * _islower - Entry point
 * @c: the character to check
 * Description: check for lowercase character
 * Return: 1 if lowercase, 0 if otherwise
 */
int _islower(int c)
{
	int i = 'a';

	for (i = 'a'; i <= 'z'; i++)
	{


		if (c == i)
		{
			return (1);
		}


	}
	return (0);
}
