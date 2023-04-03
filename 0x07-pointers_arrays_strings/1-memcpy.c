#include "main.h"

/**
 * _memcpy - Function that copies memory area
 * @dest: Destination
 * @src: What is going to be copied
 * @n: Number of bytes to copy from src to dest
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)

		dest[i] = src[i];

	return (dest);
}

