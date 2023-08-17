#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to pointer to the head node
 * @idx: index
 * @n: data to be inserted
 * Return: address of the new node, or NULL if it failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new_node, *temp = *h;

	if (h == NULL || (temp == NULL && idx > 0))
		return (NULL);
	while (temp != NULL)
	{
		if (i == idx)
		{
			if (temp->prev == NULL)
				return (add_dnodeint(h, n));

			new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
			if (new_node == NULL)
				return (NULL);
			new_node->n = n;
			new_node->next = temp->prev->next;
			temp->prev->next = new_node;
			new_node->prev = temp->prev;
			temp->prev = new_node;
			return (new_node);
		}
		i += 1;
		temp = temp->next;
	}
	if (temp == NULL && i == idx)
	{
		new_node = add_dnodeint_end(h, n);
		return (new_node);
	}
	return (NULL);
}
