#include "main.h"

/**
 * _strcpy - functions that copies a string
 * @dest: destination array
 * @src: original array
 * Return: destination array
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';

	return (dest);
}
