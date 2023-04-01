#include "main.h"

/**
 * print_number - Prints an integer
 * @n: Integer to print
 * Return: void
*/

void print_number(int n)
{
	unsigned int usiNum = n;

	if (n < 0)
	{
		_putchar('-');
		usiNum = -usiNum;
	}
	if ((usiNum / 10) > 0)
		print_number(usiNum / 10);
	_putchar((usiNum % 10) + '0');
}
