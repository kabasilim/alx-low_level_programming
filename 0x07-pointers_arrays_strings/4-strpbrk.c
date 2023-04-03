#include "main.h"

/**
 *  _strpbrk - a function that searches a string for any of a set of bytes.
 * @s: pointer to input string
 * @accept: pointer to string we searching for in s
 * Return: pointer to the bytes in s or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int c;

	while (s[i])
	{
		c = 0;
		while (accept[c])
		{
			if (s[i] == accept[c])
				return (s + i);
			c++;
		}
		i++;
	}
	return (NULL);
}
