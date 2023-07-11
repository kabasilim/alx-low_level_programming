#include "main.h"

/**
 * binary_to_uint - function that converts a binary
 * number to unsigned int
 * @b: pointing to a string containing the binary number
 * Return: the converted number or (0) if NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int j = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		j = 2 * j + (b[i] - '0');
	}
	return (j);
}
