#include "main.h"

/**
 * _pow_recursion - Function that returns the
 * value of x raised to the power of y.
 * @x: the base
 * @y: the exponent
 * Return: x raise to power y
 */

int _pow_recursion(int x, int y)
{
	/**
	* for this script, we'll assume that
	* x raised to the power of a negative int is -1
	*/
	if (y < 0)
	{
		return (-1);
	}
	/* x raise to power 0 is 1 */
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
