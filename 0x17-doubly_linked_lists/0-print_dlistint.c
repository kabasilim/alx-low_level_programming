#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * print_dlistint - prints all the elements of a doubly linked list
 * @h: pointer to header
 * Return: number of elements
*/
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t i = 0;

	temp = h;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		i += 1;
		temp = temp->next;
	}
	return (i);
}
