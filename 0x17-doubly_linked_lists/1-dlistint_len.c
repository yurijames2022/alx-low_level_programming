#include <stddef.h>
#include "lists.h"

/**
 * dlistint_len - a function that returns the number of elements in a list.
 * @h: The list to count nodes
 * Return: Returns number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t result = 0;

	while (h != NULL)
	{
		result++;
		h = h->next;
	}
	return (result);
}
