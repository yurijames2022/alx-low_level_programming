#include <stdbool.h>
#include "function_pointers.h"

/**
 * int_index - The function to execute a function to
 * compare values
 * @array: The array whose elements are to be searched
 * @size: The number of elements in the array
 * @cmp: The function to be used to compare values
 * Return: Returns the index of the element if the
 * cmp function does not return 0. If no elements match returns -1
 * and if size <= return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int arr_index;
	bool boolean;


	if (size <= 0)
	{
		return (-1);
	}

	if (array != NULL && cmp != NULL)
	{
		for (arr_index = 0; arr_index < size; arr_index++)
		{
			boolean = cmp(array[arr_index]);

			if (boolean == true)
			{
				return (arr_index);
			}
		}
	}
	return (-1);
}
