#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - Prints the nodes
 * @h: The parameter
 * Return: returns the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (count);
}
