#include "main.h"

/**
 *  _strchr - function that locates a character in a string
 * @s: String to be checked
 * @c: Character to locate input from
 * Return: First occurence of charatcer or null if not found
 */

char *_strchr(char *s, char c)
{
	int i;
	char *a = s;
	char *null = '\0';

	i = 0;
	while (s[i] != 0)
	{
		if (s[i] == c)
		{
			return (a + i);
		}
		i++;
	}
	if (c == '\0')
	{
		return (a + i);
	}
	else
	{
		return (null);
	}
}
