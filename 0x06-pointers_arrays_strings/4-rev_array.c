#include "main.h"

/**
 * reverse_array - a function that reverses the
 *                content of an array of integers
 * @a: pointer to int array
 * @n: is the number of elements to swap
 * Return: reversed array
 */

void reverse_array(int *a, int n)
{
	int temp, l, x;

	l = 0;
	x = n - 1;

	while (l < x)
	{
		temp = a[l];
		a[l] = a[x];
		a[x] = temp;
		l++;
		x--;
	}
}
