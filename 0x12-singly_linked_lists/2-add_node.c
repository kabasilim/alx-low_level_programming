#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginning
 *
 * @head: head of linked list
 * @str: string to store list
 * Return: head
 */

list_t *add_node(list_t **head, const char *str)
{
	if (!head || !str)
	{
		return (NULL);
	}

	list_t *new_node = malloc(sizeof(list_t));

	if (!new_node)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = *head;
	*head = new_node;

	return (head);
}
