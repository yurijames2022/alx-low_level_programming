#include <stdlib.h>
#include "main.h"

/**
 * create_array - A function that creates an array of chars
 * @size: The size of the array
 * @c: The specific character to be initialized
 * Return: Return NULL if size is 0 or if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	ptr = malloc(sizeof(char) * size);
	if (size == 0)
	{
		return (NULL);
	}
	else if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			ptr[i] = c;

		}

	}
	return (ptr);
}
