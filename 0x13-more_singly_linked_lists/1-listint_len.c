#include <stddef.h>
#include "lists.h"

/**
 * listint_len - Returns number of nodes
 * @h: The parameter
 * Return: Returns no of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
