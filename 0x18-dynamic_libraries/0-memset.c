#include "main.h"
/**
 * _memset - Function that fills memory with a constant byte
 * @s: Pointer to the block memory to be filled
 * @b: Character to fill
 * @n: Number of byte
 * Return: Char
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
