#include <stdio.h>
/**
 * main - finds the square root
 *
 * @x: input number
 *
 * Return: square root of x
*/
int main(void)
{
	long int x = 612852475143;
	long int y;

	for (y = 2; y < x; y++)
	{
		if (x % y == 0)
		{
			x = x / y;
		}
	}
	printf("%ld\n", y);
	return (0);
}
