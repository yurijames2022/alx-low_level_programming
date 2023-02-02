#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - A function that frees the list
 * @head: The head of the list
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;



	while (ptr)
	{
		ptr = head->next;

		free(head);
		head = ptr;
	}
}
