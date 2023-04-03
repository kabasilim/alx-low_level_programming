#include "main.h"

/**
 *  _strspn - Function that gets the length of a prexif substring
 * @s: Pointer to string input
 * @accept: Substring prefix to look for
 * Return: int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;
	char *t = accept;

	while (*s++)
	{
		while (*accept++)
		{
			if (*(s - 1) == *(accept - 1))
			{
				c++;
				break;
			}
		}
		if (!(*--accept))
		{
			break;
		}
		accept = t;
	}
	return (c);
}
