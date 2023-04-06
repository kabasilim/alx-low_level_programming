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
 * @num: number
 * @root: value
 * Return: int
*/

int square(int num, int root)
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

