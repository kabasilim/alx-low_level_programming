#include "main.h"

/**
 * _strcat - function that concatenates
 *          two strings.
 * @dest: pointer to destnation input
 * @src: pointer to source input
 * Return: pointer to resulting string @dest
*/

char *_strcat(char *dest, char *src)
{
	int a, a2;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	for (a2 = 0; src[a2] != '\0'; a2++)
	{
		dest[a] = src[a2];
		 a++;
	}
	dest[a] = '\0';
	return (dest);
}
