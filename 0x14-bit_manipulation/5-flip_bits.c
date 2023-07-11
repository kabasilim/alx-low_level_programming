#include "main.h"

/**
* flip_bits - function that returns the number of bits you would
* need to flip to get from one number to another
* @n: first input
* @m: second input
* Return: number of bits needed to be flipped to get from one number to another
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bit_num;

	if (n && m == 0)
		return (0);

	for (bit_num = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			bit_num++;
	}

	return (bit_num);
}
