#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - A function that adds a new node at the beginning
 * @head: The head of the list
 * @n: The element to be added
 * Return: Returns the address of the new element or NULL if fail
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->prev = NULL;
	new->n = n;
	new->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = new;
	}
	*head = new;

	return (new);
}
