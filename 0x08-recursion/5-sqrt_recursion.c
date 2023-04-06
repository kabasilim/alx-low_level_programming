/**
 * sqrt_recursive - Wrapper that does the recursion bit
 * @n : input number
 * @min: minimum number to guess
 * @max: maximum number to guess
 * Return: square root of @n or -1
 */

int sqrt_recursive(int n, int min, int max)
{
	int guess, guess_squared;

	guess = (min + max) / 2;
	guess_squared = guess * guess;

	if (guess_squared == n)
		return (guess);
	else if (min == max)
		return (-1);
	else if (guess_squared < n)
		return (sqrt_recursive(n, guess + 1, max));
	else
		return (sqrt_recursive(n, min, guess - 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: integer
 */

int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);
	else if (n == 0)
		return (0);
	else if (n < 0)
		return (-1);
	else
		return (sqrt_recursive(n, 1, n));
}
