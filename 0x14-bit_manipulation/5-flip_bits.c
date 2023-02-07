#include "main.h"

/**
 * flip_bits - Function that counts the number of bits needed to be
 *             flipped to get from one number to another.
 * @n: The number.
 * @m: The number to flip n to.
 *
 * Return: Returns the necessary number of bits to flip to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m, bits = 0;

	while (x > 0)
	{
		bits += (x & 1);
		x >>= 1;
	}

	return (bits);
}
