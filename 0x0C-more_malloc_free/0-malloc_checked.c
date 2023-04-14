#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked -  A function that allocates memory using malloc.
 * @b: variable to be assigned
 * Return: a if successful
 */

void *malloc_checked(unsigned int b)
{
	int *a = malloc(b);

	if (a == NULL)
	{
		exit(98);
	}
	return (a);
}
