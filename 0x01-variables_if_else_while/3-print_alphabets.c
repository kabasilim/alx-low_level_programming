#include <stdio.h>

/**
 * main - Entry Point.
 *
 * Return: Always 0 for success.
 */
int main(void)
{
	int count = 97;

	do {
		putchar(count);
		count++;

	} while (count <= 122);

	count = 65;

	do {
		putchar(count);
		count++;
	} while (count <= 90);

	putchar('\n');

	return (0);
}
