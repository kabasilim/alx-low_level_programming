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
 * @y: value
 * Return: int
*/

int square(int n, int y)
{
	if ((y * y) == n)
	{
		return (y);
	}
	else if ((y * y) < n)
	{
		return (square(n, y + 1));
	}
	else
	{
		return (-1);

