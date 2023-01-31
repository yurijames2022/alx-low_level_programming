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
{
	list_t *ptr;
	char *dup;
	int len;

	ptr = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	ptr->str = dup_str;
	ptr->len = len;
	ptr->next = *head;
	*head = ptr;

	return (ptr);
}
