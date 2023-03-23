#include"main.h"

/**
 * more_numbers - print 0 - 14 ten times
 * youcan only use _putchar three times
 *
 * Return: 0
*/
void more_numbers(void)
{
	int n, i;

	for (n = 0; n < 10; n++)

	{
		for (i = 0; i <= 14; i++)

		{
			if (i > 9)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
