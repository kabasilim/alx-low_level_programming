#include "main.h"
/**
 * _isdigit - checks if an input is a digit
 * @n: input to be checked
 * Return: 1 or 0
 */
int _isdigit(int n)
{
int i;
for (i = '0'; i <= '9'; i++)
{
	if (n == i)
	{
		return (1);
	}
}
	return (0);
}
