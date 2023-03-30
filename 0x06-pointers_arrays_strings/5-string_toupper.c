#include "main.h"

/**
 * string_toupper - a function that changes all
 * lowercase letters of a string to uppercase.
 * @s : pointer to input char
 * Return: uppercase string
 */

char *string_toupper(char *s)
{
	char lett;
	int k;

	k = 0;

	while (s[k] != '\0')
	{
		lett = 'a';
		while (lett <= 'z')
		{
			if (s[k] == lett)
			{
				s[k] = s[k] - 32;
			}
			lett++;
		}
		k++;
	}
	return (s);
}
