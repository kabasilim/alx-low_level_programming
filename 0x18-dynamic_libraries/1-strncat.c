#include "main.h"

/**
 * _strncat - Function that concatenates two strings.
 * @dest: Pointer to destination input.
 * @src: Pointer to source input.
 * @n: Number of bytes from @src.
 * Return: Concatenated string.
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	for (b = 0 ; b < n && src[b] != '\0' ; ++b)
	{
		dest[a + b] = src[b];
	}
	dest[a + b] = '\0';
	return (dest);
}
