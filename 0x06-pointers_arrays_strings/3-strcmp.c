#include "main.h"

/**
 * _strcmp - Entry point
 * @s1: 1st pointer
 * @s2: 2nd pointer
 *
 * Return: Return comparison
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
