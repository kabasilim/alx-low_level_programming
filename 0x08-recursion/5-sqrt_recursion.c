#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: integer
 */

int _sqrt_recursion(int n)
{
	return (sqrt_recursive(n, 1));
}

/**
 * sqrt_recursive - finds the square root of a number
 * @n: number
 * @v: value
 * Return: int
 */

int sqrt_recursive(int n, int v)
{
	if ((v * v) == n)
	{
		return (v);
	}
	else if ((v * v) < n)
	{
		return (sqrt_recursive(n, v + 1));
	}
	else
	{
		return (-1);
	}
}
