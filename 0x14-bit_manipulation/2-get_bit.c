#include "main.h"

/**
 * get_bit - function that returns the value of a bit at
 * an index in a decimal number
 * @n: input to search
 * @index: index of the bit starting from 0
 * Return: value of the bit or (-1) if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int num;

	if (n == 0)
		return (0);
	if (index > 64)
		return (-1);
	num = (n >> index) & 1;
	return (num);
}
