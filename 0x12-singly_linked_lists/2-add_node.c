#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - Adds new node to beginning of linked list
 * @head: The pointer to the start of list
 * @str: String pointer
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp = malloc(sizeof(list_t));
	temp->str = strdup(str);
	temp->next = NULL;
	temp->next = *head;
	*head = temp;
	return (temp);
}
