#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print out all singke digit number of
 * base 10 starting from 0, followed by a new line.
 *
 * Return: Always 0 for success.
 */
int main(void)
{
	int count = 0;

	while (count <= 9)
	{
		printf("%d", count);
		count++;
	}
	printf("\n");

	return (0);
}
