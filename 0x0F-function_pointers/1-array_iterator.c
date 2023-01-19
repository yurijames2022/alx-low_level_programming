#include <stddef.h>
#include "function_pointers.h"
/**
 * array_iterator - Executes a function given as a parameter
 * @array: The array to be iterated
 * @size: The size of the array
 * @action: The function to be executed
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t index;

	for (index = 0; index < size; index++)
	{
		action(array[index]);
	}
}
