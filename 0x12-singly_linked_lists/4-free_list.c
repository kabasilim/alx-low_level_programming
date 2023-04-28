#include "list.h"

/**
 * free_list - frees lists
 * @head: head of the list
 * Return: no return
 */

void free_list(list_t *head)
{
	list_t *current_node = head;

	while (current_node != NULL)
	{
		list_t *next_node = current_node->next;

		free(current_node);

		current_node = next_node;
	}
}

