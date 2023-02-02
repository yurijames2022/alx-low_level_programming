#include <stddef.h>
#include "lists.h"
/**
 * reverse_listint- Function that reverses linked list
 * @head: The head of the linked list
 * Return: Returns the address of head
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

	prev = NULL;
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
