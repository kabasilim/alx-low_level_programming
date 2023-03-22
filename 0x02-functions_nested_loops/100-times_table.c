#include"main.h"

/**
 * print_times_table - prints time table of n
 *
 * @n: takes number input
*/

void print_times_table(int n)
{
	int a, b, c;

	if (n <= 15 && n >= 0)
	{
		for (c = 0; c <= n; ++c)
		{
			_putchar(48);
			for (b = 1; b <= n; ++b)
			{
				_putchar(',');
				_putchar(' ');

				a = c * b;

				if (a <= 9)
					_putchar(' ');
				if (a <= 99)
					_putchar(' ');

				if (a >= 100)
				{
					_putchar((a / 100) + 48);
					_putchar((a / 10) % 10 + 48);
				} else if (a <= 99 && a >= 10)
					_putchar((a / 10) + 48);
				_putchar((a % 10) + 48);
			}
			_putchar('\n');
		}
	}
}
