#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;
	printf("last digit of %d is %d", n, x);
	if (x > 5)
	{
		printf("is greater than 5");
	}
	if (x == 0)
	{
		printf("is 0");
	}
	if (x < 6 && x != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_digit");
	printf("\n");
	return (0);
}
