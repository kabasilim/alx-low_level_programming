#include"main.h"

/**
 * main - Entry point
 *
 * Description: computes the sum of all
 *		the multiples of 3 or 5
 *		below 1024 (excluded)
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int sum, a;

	for (a = 0; a < 1024; ++a)
	{
		if ((a % 3 == 0) || (a % 5 == 0))
			sum += a;
	}
	printf("%d\n", sum);

	return (0);
}
