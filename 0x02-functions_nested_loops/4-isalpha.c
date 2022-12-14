#include "main.h"
/**
 * _isalpha - Entry point
 * @c: character to check alphabet
 * Description: function that checks for alphabetic character
 * Return: 1 if alphabet, 0 if otherwise
 */
int _isalpha(int c)
{
	int i, j;

	for (i = 'a'; i <= 'z'; i++)
	{
		for (j = 'A'; j <= 'Z'; j++)
		{
			if (c == i || c == j)
			{
				return (1);
			}
		}
	}
	return (0);
}
