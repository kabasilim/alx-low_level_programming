#include <stdio.h>
/**
 * _sqrt - finds the square root
 *
 * @x: input number
 *
 * Return: 0
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
