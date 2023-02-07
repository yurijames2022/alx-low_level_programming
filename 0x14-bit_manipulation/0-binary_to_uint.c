#include "main.h"

/**
 * binary_to_uint - The function converts a char containing
 * 0s and 1s to an unsigned int
 * @b: The pointer of the variable to be converted
 * Return: Returns unsigned int or 0 if not 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int ans = 0;
	int len = 0;

	if (b[len] == '\0')
		return (0);

	while ((b[len] == '0') || (b[len] == '1'))
	{
		ans <<= 1;
		ans += b[len] - '0';
		len++;
	}

	return (ans);
}
