#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - A function that inserts node at given position
 * @h: The list
 * @idx: The index
 * @n: The data to add
 * Return: Address of new node or NULL if failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new, *temp;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->prev = NULL;
	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		
	}
	while (*h != NULL && i < idx)
	{
		*h = (*h)->next;
		i++;
	}
	if (*h == NULL)
	{
		return (NULL);
	}

	temp = (*h)->next;
	(*h)->next = new;
	temp->prev = new;
	new->prev = *h;
	new->next = temp;

	return (new);
}
