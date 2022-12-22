#include "main.h"

/**
 * *_strcat - Entry point
 * @src: source
 * @dest: destiation
 * Return: Return pointer
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int dl = 0;

	while (dest[i++])
	{
		dl++;
	}
	for (i = 0; src[i]; i++)
	{
		dest[dl++] = src[i];
	}
	return (dest);
}
