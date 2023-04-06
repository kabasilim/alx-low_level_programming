/**
 * sqrt_recursive - Wrapper that does the recursion bit
 * @n : input number
 * @min: minimum number to guess
 * @max: maximum number to guess
 * Return: square root of @n or -1
 */

int sqrt_recursive(int n, int min, int max)
{
	if (min > max)
	{
		return (-1); /* n does not have a natural square root */
	}

	int med = (min + max) / 2;
	int sq = med * med;

	if (sq == n)
	{
		return (med);
	}
	else if (sq > n)
	{
		return (sqrt_recursive(n, min, med - 1));
	}
	else
	{
		return (sqrt_recursive(n, med + 1, max));
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

