#include <stddef.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - A function that returns the nth node of a list
 * @head: The head of the list
 * @index: The index of the element to be returned
 * Return: Returns he nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp = head;


	while (temp != NULL && i < index)
	{
		temp = temp->next;
		i++;
	}

	if (temp == NULL)
	{
		return (NULL);
	}
	return (temp);

}
