#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @num: number
 * Return: integer
 */

int _sqrt_recursion(int num)
{
	return (find_sqrt(num, 1));
}

/**
 * find_sqrt - finds the square root of a number
 * @num: The number to find the square root of.
 * @root: The root to be tested.
 * Return: If the number has a natural square root - the square root.
 *         If the number does not have a natural square root  -1.
 */

int find_sqrt(int num, int root)
{
	if ((root * root) == num)
	{
		return (root);
	}
	else if ((root * root) < num)
	{
		return (square(num, root + 1));
	}
	else
	{
		return (-1);
	}
}
