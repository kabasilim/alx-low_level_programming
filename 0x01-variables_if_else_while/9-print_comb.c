#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: Print all possible different combinations of two digits.
 *
 * Return: Always 0 for success.
 */
int main(void)
{
	int tens = 0, unit;

	while (tens <= 9)
	{
		unit = 0;
		while (unit <= 9)
		{
			if (unit != tens && tens < unit)
			{
				putchar(tens + 48);
				putchar(unit + 48);

				if (unit + tens != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}

			unit = unit + 1;
		}

		tens = tens + 1;
	}

	putchar('\n');
	return (0);
}
