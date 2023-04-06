#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: integer
 */

int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - finds the square root of a number
 * @n: number
 * @v: value
 * Return: int
 */

int square(int n, int v)
{
	if ((v * v) == n)
	{
		return (v);
	}
	else if ((v * v) < n)
	{
		return (square(n, v + 1));
	}
	else
	{
		return (-1);
	}
}
