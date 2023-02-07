#include "main.h"

/**
 * set_bit - Function that gets the value of a bit at a given index to 1.
 * @n: A pointer to the bit.
 * @index: The index to set the value at
 *
 * Return: Return 1 if success or -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
