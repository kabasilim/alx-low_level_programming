#include "main.h"

/**
 * leet - a function that encodes a string into 1337
 * @s: string input
 * Return: modified string
 */

char *leet(char *s)
{
	int i, j;

	char letters[] = "AEOTL";
	char codes[] = "43071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if ((s[i] == letters[j]) || (s[i] == (letters[j] + 32)))
			{
				s[i] = codes[j];
			}
		}
	}
	return (s);
}
