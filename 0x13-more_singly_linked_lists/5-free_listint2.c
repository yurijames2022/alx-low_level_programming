#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - A function that frees a list and sets head to NULL
 * @head: the parameter
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL)
	{
		return;
	}

	while (ptr)
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
	}
	head = NULL;
}
