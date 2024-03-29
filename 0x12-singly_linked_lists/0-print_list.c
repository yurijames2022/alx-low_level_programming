#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list
 * @h: The structure to print
 * Return: Returns the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count_nodes = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		count_nodes++;
		h = h->next;
	}

	return (count_nodes);
}
