#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - A function that adds a node at te end
 * @head: The head of the node
 * @n: The integer to be stored in the node
 * Return: Returns address of the new element or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *ptr;


	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}

	else
	{
		ptr = *head;

		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = new;
	}
	return (*head);


}
