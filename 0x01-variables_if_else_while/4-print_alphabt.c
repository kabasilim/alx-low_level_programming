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
		if (count == 113 || count == 101)
		{
			count++;
			continue;
		}

		putchar(count);
		count++;

	} while (count <= 122);

	putchar('\n');

	return (0);
}
