#include "main.h"

/**
 * clear_bit -  function that sets the value of a bit to 0 at a
 * given index
 * @n: pointer of an unsigned long int
 * @index: is the index, starting from 0 of the bit you want to set
 * Return: (1) if it worked, (-1) if an error occurs
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int num;

	if (index > 63 || !n)
		return (-1);

	num = 1 << index;
	 if (*n & num)
	 {
		 *n &= ~num;
	 }

	return (1);
}
