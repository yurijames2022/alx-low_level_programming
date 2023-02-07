#include "main.h"

/**
 * clear_bit - Function that sets the value of a bit at a given index to 0.
 * @n: A pointer to the bit.
 * @index: The index to set the value at.
 *
 * Return: Return 1 if success or -1 if otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
