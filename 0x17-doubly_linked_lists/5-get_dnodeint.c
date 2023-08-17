#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to head node
 * @index: index of node to return
 * Return: nth node if sucessful, NULL otherwise
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i = 0;

	temp = head;
	if (head == NULL)
		return (NULL);
	while (temp != NULL)
	{
		if (i == index)
			return (temp);
		i += 1;
		temp = temp->next;
	}
	return (NULL);
}
