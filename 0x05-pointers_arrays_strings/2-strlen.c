#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @b: string parameter input
 *
 * Return: returns the length of string
*/
int _strlen(char *b)
{
	int a;

	a = 0;
	while (b[a] != '\0')
	{
		a++;
	}
	return (a);
}
