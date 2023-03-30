#include "main.h"

/**
 * print_number - Prints an integer
 * @n: Integer to print
 * Return: void
*/

void print_number(int n)
{
	unsigned int uNum = n;

	if (n < 0)
	{
		_putchar('-');
		uNum = -uNum;
	}
	if ((uNum / 10) > 0)
		print_number(uNum / 10);
	_putchar((uNum % 10) + '0');
}
