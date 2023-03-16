#include <stdio.h>
#include <stddef.h>
#include "lists.h"
/**
 * print_dlistint - A function that prints all the elements of a list
 * @h: The list to be printed
 * Return: Returns the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t result = 0;

	while (h != NULL)
	{
		result++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (result);
}
