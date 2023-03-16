#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - A function that frees a list
 * @head: The head of the list
 * Return: 0
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	while (temp->next != NULL)
	{
		temp = temp->next;
		head = temp;
		free(temp->prev);
	}
	free(temp);
}
