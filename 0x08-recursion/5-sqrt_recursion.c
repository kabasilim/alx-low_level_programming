/**
 * _sqrt_recursive - Wrapper that does the recursion bit
 * @n : input number
 * @x: minimum number to guess
 * @y: maximum number to guess
 * Return: square root of @n or -1
 */

int _sqrt_recursive(int n, int x, int y)
{
	if (x > y)
	{
		return (-1); /* n does not have a natural square root */
	}

	int z = (x + y) / 2;
	int sq = z * z;

	if (sq == n)
	{
		return (z);
	}
	else if (sq > n)
	{
		return (_sqrt_recursive(n, x, z - 1));
	}
	else
	{
		return (_sqrt_recursive(n, z + 1, y));
	}
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: integer
 */

int _sqrt_recursion(int n)
{
	return (sqrt_recursive(n, 0, n));
}

