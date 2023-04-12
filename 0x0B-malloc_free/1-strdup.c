#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - returns a pointer to a duplicate string
 * @str: string to be duplicated
 * Return: pointer
 */

char *_strdup(char *str)
{
	int i, size;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}

	size = 0;

	while (str[size] != '\0')
	{
		size++;
	}

	/*+1 on the size puts the end of string character*/
	s = malloc(size * sizeof(*str) + 1);

	if (s == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			s[i] = str[i];
		}
	}
	return (s);

}
