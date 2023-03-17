#include <stdio.h>

/**
 * main - Entry Point.
 *
 * Return: Always 0 for success.
 */
int main(void)
{
	int count = 122;

	do {
		putchar(count);
		count--;

	} while (count >= 97);

	putchar('\n');

	return (0);
}
