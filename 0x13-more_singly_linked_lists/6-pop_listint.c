#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Function that deletes te head node
 * @head: The head node to delete
 * Return: Returns head->n or 0 if list is empty
*/

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int hold;

	if (*head == NULL)
	{
		return (0);
	}

	temp = (*head)->next;
	hold = (*head)->n;
	free(*head);
	*head = temp;
	return (hold);
}
