#include "main.h"
/**
 * print_numbers - prints numbers 0 to 9
 * you can only use _putchar twice
 * Return: 0
*/
void print_numbers(void)
{
int i;
i = 0;
while (i <= 9)
{
	_putchar(i + '0');
	i++;
}
_putchar('\n');
}
