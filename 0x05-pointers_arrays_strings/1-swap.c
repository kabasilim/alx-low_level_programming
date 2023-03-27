#include "main.h"

/**
 * swap_int- swaps the value of two numbers
 * @a: number to be swapped
 * @b: number to be swapped
 * Return: void
*/
void swap_int(int *a, int *b)
{
	int c, d;

	c = *a;
	d = *b;
	*a = d;
	*b = c;
}
