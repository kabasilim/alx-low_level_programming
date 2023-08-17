#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
 * dlistint_len - returns the number of elements in a doubly linked list
 * @h: pointer to the head node
 * Return: number of elements
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;
	const dlistint_t *temp = h;

	while (temp != NULL)
	{
		i += 1;
		temp = temp->next;
	}
	return (i);
}
