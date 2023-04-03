#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Function that print the sum of two diagonals of
 * a square matrix
 * @a: a 2D array
 * @size: dimension of the array (size x size)
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, s1, s2;
	/* s1 and s2 : sum1 and sum2*/
	s1 = 0;
	s2 = 0;

	for (i = 0; i < size; i++)
	{
		s1 += a[i];
		s2 += a[size - i - 1];
		a += size;
	}
	printf("%d, %d\n", s1, s2);
}
