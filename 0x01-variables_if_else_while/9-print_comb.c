#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: Print out all possible combinations of single-digit numbers.
 *
 * Return: Always 0 for success.
 */
int main(void)
{
	int count = 48;

	while (count <= 57)
	{
		putchar(count);

		if (count != 57)
		{
			putchar(',');
			putchar(' ');
		}

		count++;
	}

	putchar('\n');

	return (0);
}
