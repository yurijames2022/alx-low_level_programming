#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - A function that deletes a node at given index
 * @head: The head of the list
 * @index: The index
 * Return: 1 if successful, -1 if failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *temp, *temp1, *temp2;

	temp = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
	}
	else
	{
		while (temp != NULL && i < index)
		{
			temp = temp->next;
			i++;
		}
		if (temp == NULL)
		{
			return (-1);
		}
		if (temp->next == NULL)
		{
			temp1 = temp->prev;
			free(temp);
			temp1->next = NULL;
		}
		temp1 = temp->prev;
		temp2 = temp->next;
		temp1->next = temp2;
		temp2->prev = temp1;
		free(temp);

	}
	return (1);
}
