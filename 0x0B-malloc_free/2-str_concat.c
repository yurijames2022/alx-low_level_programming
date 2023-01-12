#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: String 1
 * @s2: String 2
 * Return: Return pointer if Success and NULL if failure
 */


char *str_concat(char *s1, char *s2)
{
	char *concat = 0;
	int i;
	int concat_i = 0;
	int len = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i] || s2[i]; i++)
	{
		len++;
	}

	concat = malloc(sizeof(char) * len);

	if (concat == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i]; i++)
	{
		concat[concat_i++] = s1[i];
	}

	for (i = 0; s2[i]; i++)
	{
		concat[concat_i++] = s2[i];
	}

	return (concat);
}
