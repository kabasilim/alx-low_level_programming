#include"main.h"

/**
 * times_table - prints the 9 times table
 * Example Table
 * 0, 0, 0, 0,
 * 0, 1, 2, 3, 
*/

void times_table(void)
{
	int a, b, c;

	for (a = 0; a <= 9; ++a)
	{
		_putchar(48);

		for (b = 1; b <= 9; ++b)
		{
			_putchar(',');
			_putchar(' ');

			c = a * b;

			if (c <= 9)
				_putchar(' ');
			else
				_putchar((c / 10) + 48);

			_putchar((c % 10) + 48);
		}
		_putchar('\n');
}
