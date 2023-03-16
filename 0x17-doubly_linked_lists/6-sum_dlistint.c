#include <stddef.h>
#include "lists.h"

/**
 * sum_dlistint - A function that returns the sum of all data in list
 * @head: The head of list
 * Return: Returns the sum of data
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	else
	{
		while (temp != NULL)
		{
			sum += temp->n;
			temp = temp->next;
		}
	}
	return (sum);
}
