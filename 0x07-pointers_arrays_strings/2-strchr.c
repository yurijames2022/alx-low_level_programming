#include "main.h"

/**
 * *_strchr - Locates a character in string
 * @s: String
 * @c: Character to be located
 * Return: A pointer if found and NULL if not
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return ('\0');
}
