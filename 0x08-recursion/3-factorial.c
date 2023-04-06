#include "main.h"

/**
 * factorial - function that returns the factorial of a given number
 * @n: number
 * Return: n!
 */

int factorial(int n)
{
	if (n < 0)
	{
	/* Error: n is negative */
	return (-1);
	}
		else if (n == 0)
		{
			/* Base case: factorial of 0 is 1 */
			return (1);
		}
	else
	{
		return (n * factorial(n - 1));
	}
}
