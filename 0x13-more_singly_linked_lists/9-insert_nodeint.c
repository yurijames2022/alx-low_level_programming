#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts new node at nth position
 * @idx: Index of the linked list
 * @head: The head of the list
 * @n: The integer value of the new node
 * Return: Returns address of new node or NULL if fail
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current, *copy;
	unsigned int pos;

	copy = *head;
	current = *head;

	current = malloc(sizeof(listint_t));

	if (current == NULL)
	{
		return (NULL);
	}

	current->n = n;

	if (idx == 0)
	{
		current->next = *head;
		*head = current;
		return (current);
	}
	for (pos = 0; pos < (idx - 1); pos++)
	{
		if (copy == NULL || copy->next == NULL)
			return (NULL);

		copy = copy->next;
	}

	current->next = copy->next;
	copy->next = current;

	return (current);
}
