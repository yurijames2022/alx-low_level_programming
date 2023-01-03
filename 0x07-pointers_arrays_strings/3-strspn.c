#include "main.h"

/**
 *_strspn - gets length of prefix substring
 *@s: String to be searched
 *@accept: The character to be measured
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int bytes = 0;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				bytes++;
				break;
			}
			else if (accept[i + 1] == '\0')
			{
				return (bytes);
			}

		}
		s++;

	}
	return (bytes);
}
