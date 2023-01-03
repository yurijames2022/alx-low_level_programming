#include "main.h"

/**
 * *_memset - Func that fills memory with constant byte
 * @s: Pointer to memory
 * @b: byte to fill
 * @n: max no of bytes
 * Return: (s);
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
