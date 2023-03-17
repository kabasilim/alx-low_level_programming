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
	int hundred = 0, tens, unit;

	while (hundred <= 9)
	{
		tens = 0;
		while (tens <= 9)
		{
			unit = 0;
			while (unit <= 9)
			{
				if (hundred < tens && tens < unit)
				{
					putchar(hundred + 48);
					putchar(tens + 48);
					putchar(unit + 48);

					if (hundred + tens + unit != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}

				unit = unit + 1;
			}

			tens = tens + 1;
		}

		hundred = hundred + 1;
	}

	putchar('\n');

	return (0);
}
