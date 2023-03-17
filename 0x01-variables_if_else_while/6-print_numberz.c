#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: Print out all single digit numbers of
 *		base 10 starting from 0, followed by a new line.
 *
 * Return: Always 0 for success.
 */
int main(void)
{
	int count = 48;

	while (count <= 57)
	{
		putchar(count);
		count++;
	}

	putchar('\n');

	return (0);
}
