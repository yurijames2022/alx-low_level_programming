#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Functions that frees nodes in list_t
 * @head: head of list
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
