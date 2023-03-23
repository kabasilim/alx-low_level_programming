#include <stdio.h>
/**
 * _sqrt - finds the square root
 *
 * @x: input number
 *
 * Return: square root of x
*/
double _sqrt(double x)
{
	float sqrt, tmp;

	sqrt = x / 2;
	tmp = 0;

	while (sqrt != tmp)
	{
		tmp = sqrt;
		sqrt = (x / tmp + tmp) / 2;
	}
	return (sqrt);
}
