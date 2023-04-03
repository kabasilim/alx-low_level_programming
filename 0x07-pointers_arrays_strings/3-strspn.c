#include "main.h"

/**
 *  _strspn - Function that gets the length of a prexif substring
 * @s: Pointer to string input
 * @accept: Substring prefix to look for
 * Return: int
*/

unsigned int _strspn(char *s, char *accept)
{
	int i, a, b;

	i = 0;
	while (s[i] != '\0')
	{
		a = 0;
		b = 1;
		while (accept[a] != '\0')
		{
			if (s[i] == accept[a])
			{
				b = 0;
				break;
			}
			a++;
		}
		if (a == 1)
			break;
		i++;
	}

	return (i);
}
