#include <stddef.h>
#include "lists.h"

/**
 * list_len - Returns no. of elemrnts in a linked list
 * @h - List
 * Return: The number of elements
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while(h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
