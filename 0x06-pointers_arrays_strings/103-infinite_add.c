#include "main.h"

/**
 * rev_string - Reverse array.
 * @n: integer parameter.
 * Return: 0
 */

void rev_string(char *n)
{
	int i = 0;
	int a = 0;
	char temp;

	while (*(n + i) != '\0')
	{
		i++;
	}
	i--;

	for (a = 0; a < i; a++, i--)
	{
		temp = *(n + a);
		*(n + a) = *(n + i);
		*(n + i) = temp;
	}
}

/**
 * infinite_add - Add two numbers together.
 * @n1: Text representation of 1st number to add
 * and
 * @n2: Text representation of 2nd number to add.
 * @r: Pointer to buffer.
 * @size_r: Buffer size.
 * Return: Pointer to calling function.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int inu = 0, i = 0, a = 0, numbers = 0;
	int wor1 = 0, wor2 = 0, temp_tot = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + a) != '\0')
		a++;
	i--;
	a--;
	if (a >= size_r || i >= size_r)
		return (0);
	while (a >= 0 || i >= 0 || inu == 1)
	{
		if (i < 0)
			wor1 = 0;
		else
			wor1 = *(n1 + i) - '0';
		if (a < 0)
			wor2 = 0;
		else
			wor2 = *(n2 + j) - '0';
		temp_tot = wor1 + wor2 + inu;
		if (temp_tot >= 10)
			inu = 1;
		else
			inu = 0;
		if (numbers >= (size_r - 1))
			return (0);
		*(r + numbers) = (temp_tot % 10) + '0';
		numbers++;
		a--;
		i--;
	}
	if (numbers == size_r)
		return (0);
	*(r + numbers) = '\0';
	rev_string(r);
	return (r);
}
