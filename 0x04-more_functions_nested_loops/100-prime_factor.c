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
	long int i, max, n;

	max = -1;
	n = 612852475143 ;
	while (n % 2 == 0)
	{
		max = 2;
		n = n / 2;
	}
	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			max = i;
			n = n / i;
		}
	}
	if (n > 2)
	{
		max = n;
	}
	printf("%ld\n", max);

	return (0);

}
