#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - Function that adds a node to the end
 * @head: The head of the list
 * @str: The string contained in the node
 * Return: The new node or NULL if fail
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *temp;
	char *dup_str;
	int str_len = 0;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	dup_str = strdup(str);

	if (dup_str == NULL)
	{
		free(temp);
		return (NULL);
	}

	while (str[str_len])
	{
		str_len++;
		temp->str = dup_str;
		temp->len = str_len;
	}
	if (*head == NULL)
	{
		*head = temp;
	}
	else
	{
		ptr = *head;

		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
                temp->next = NULL;
		ptr->next = temp;

	}
	return (*head);

}
