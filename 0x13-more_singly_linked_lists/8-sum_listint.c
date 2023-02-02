#include <stddef.h>
#include "lists.h"

/**
 * sum_listint - Function that calculates sum of nodes data
 * @head: The head of the linked list
 * Return: Returns sum of nodes or 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	listint_t *ptr;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	else
	{
		ptr = head;

		while (ptr)
		{
			sum += ptr->n;
			ptr = ptr->next;
		}
	}
	return (sum);

}
