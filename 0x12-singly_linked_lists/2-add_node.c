#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - Adds new node to beginning of linked list
 * @head: The pointer to the start of list
 * @str: String pointer
 * Return: Returns new node at the beginning
 */

list_t *add_node(list_t **head, const char *str)
{	list_t *new;
	char *dup_str;
	int len = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dup_str = strdup(str);
	if (dup_str == NULL)
	{
		free(new);
		return (NULL);
	}

	while (str[len])

		len++;


	new->str = dup_str;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}
