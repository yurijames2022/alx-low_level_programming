#include "main.h"

/**
 * _strncat - Entry point
 * @dest: Destination
 * @src: Source
 * @n: no of bytes
 *
 * Return: Return Pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, dl = 0;

	while (dest[i++])
	{
		dl++;
	}
	for (i = 0; src[i] && i < n; i++)
	{
		dest[dl++] = src[i];
	}
	return (dest);
}
