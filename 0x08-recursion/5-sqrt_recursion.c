/**
 * sqrt_recursive - Wrapper that does the recursion bit
 * @n : input number
 * @small: minimum number to guess
 * @large: maximum number to guess
 * Return: square root of @n or -1
 */

int sqrt_recursive(int n, int small, int large)
{
	if (small > large)
	{
		return (-1); /* n does not have a natural square root */
	}

	int medium = (small + large) / 2;
	int sq = medium * medium;

	if (sq == n)
	{
		return (medium);
	}
	else if (sq > n)
	{
		return (sqrt_recursive(n, small, medium - 1));
	}
	else
	{
		return (sqrt_recursive(n, medium + 1, large));
	}
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: integer
 */

int _sqrt_recursion(int n)
{
	return (_sqrt_recursive(n, 0, n));
}

