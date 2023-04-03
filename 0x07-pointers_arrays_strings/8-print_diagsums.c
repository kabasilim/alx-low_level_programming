#include "main.h"

/**
 * print_diagsums - Function that print the sum of two diagonals of
 * a square matrix
 * @a: a 2D array
 * @size: dimension of the array (size x size)
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	unsigned int size1, size2;
	int i, j;

	i = 0;
	j = 0;
	size1 = 0;

	while (i < size)
	{
		size1 += *(a + (i * size + j));
		i++;
		j++;
	}

	i = 0;
	j = size - 1;
	size2 = 0;

	while (i < size)
	{
		size2 += *(a + (i * size + j));
		i++;
		j--;
	}

	printf("%d, %d\n", size1, size2);

}
