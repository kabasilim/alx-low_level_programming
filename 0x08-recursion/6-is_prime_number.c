#include "main.h"
/**
 * is_prime_number - checks if integer is a prime number
 * @n: number to be checked
 * Return: 1 if prime number and 0 otherwise
 */

int is_prime_number(int n)
{
	return (main(n, 2));

}

/**
 * main - checks if a number is a prime number
 * @n: number to be checked
 * @y: number
 * Return: 1 if prime number and 0 otherwise
 */

int main(int n, int y)
{
	if (y >= n && n > 1)
	{
		return (1);
	}
	else if ((n % y == 0) || (n <= 1))
	{
		return (0);
	}
	else
	{
		return (main(n, y + 1));
	}
}
