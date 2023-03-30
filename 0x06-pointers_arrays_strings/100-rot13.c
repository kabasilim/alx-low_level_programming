#include "main.h"

/**
 * *rot13 - Encodes a string using rot13
 * @str: Pointer to string
 * Return: Pointer to str
 */
char *rot13(char *str)
{
	int a, b;

	char x[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char y[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (a = 0; str[a] != '\0'; a++)
	{
		for (b = 0; x[b] != '\0'; b++)
		{
			if (str[a] == x[b])
			{
				str[a] = y[b];
				break;
			}
		}
	}
	return (str);
}

