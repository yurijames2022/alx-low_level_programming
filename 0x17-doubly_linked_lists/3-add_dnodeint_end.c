#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - A node that adds a new node at the end
 * @head: The head of the list
 * @n: The element to add
 * Return: Returns the adress of new element or NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	temp = *head;

	new->prev = NULL;
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
		new->prev = temp;
	}
	return (new);
}
