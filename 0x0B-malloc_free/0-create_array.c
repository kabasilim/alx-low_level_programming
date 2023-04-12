#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of characters and initializes
 *		it with a specific char
 * @size: size of the array
 * @c: the specific char
 * Return:  a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *ar;

	ar = malloc(size * sizeof(char));
	if (size == 0 || ar == 0)
	{
		return ('\0');
	}
	while (size--)
	{
		ar[size] = c;

	}
	return (ar);

}
