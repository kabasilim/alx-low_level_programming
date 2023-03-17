#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: Print out all single digit numbers of
 *		base 16 starting from 0, followed by a new line.
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

	count = 97;

	while (count <= 102)
	{
		putchar(count);
		count++;
	}

	putchar('\n');

	return (0);
}
