#include <stddef.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Function that returns the nth node of a linked list
 * @head: The head of the linked list
 * @index: The index of the node
 * Return: Returns the nth node or NULL if node is non-existent
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int pos = index;

	if (pos == 0 && head != NULL)
	{
		return (head);
	}
	else
	{
		ptr = head;
		while (pos != 0)
		{
			ptr = ptr->next;
			pos--;
		}
		if (ptr == NULL)
		{
			return (NULL);
		}
		return (ptr);
	}
}
