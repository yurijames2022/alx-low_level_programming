#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds node to begginning of list
 * @head: The head of the list
 * @n: The integer to add
 * Return: returns address of the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp = malloc(sizeof(listint_t));

	if (temp == NULL)
	{
		return (NULL);
	}
	temp->n = n;
	temp->next = *head;
	*head = temp;

	return (*head);
}
