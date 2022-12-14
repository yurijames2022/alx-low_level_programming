#include <stdlib.h>
#include "main.h"

/**
 * _strdup - A function that duplicates a string
 * @str: The string to be duplicated
 * Return: Return pointer to string and NULL if memory not sufficient
 */

char *_strdup(char *str)
{
	int i;
	int size = 0;
	char *dup;

	if (str == NULL)

		return (NULL);


	for (i = 0; str[i]; i++)

		size++;


	dup = malloc(sizeof(char) * (size + 1));

	for (i = 0; str[i]; i++)

		dup[i] = str[i];

	dup[size] = '\0';

	return (dup);
}
