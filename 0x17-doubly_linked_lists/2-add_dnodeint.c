#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * add_dnodeint - adds a node to the beginning of a a dlistint_t list
 * @head: pointer to pinter to head node
 * @n: node to add
 * Return: the address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = (*head);
	if (*head != NULL)
		(*head)->prev = new_node;
	(*head) = new_node;

	return (new_node);
}
