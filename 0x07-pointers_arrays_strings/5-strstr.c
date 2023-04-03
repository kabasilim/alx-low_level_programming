#include "main.h"

/**
 *  _strstr - Function that locates a substring
 *
 * @haystack: input string to search for matching
 *            substrings
 * @needle: subtring 
 *
 * Return: A pointer to the beginning
 *         of the located substring or
 *         NULL if substring is not found
*/

char *_strstr(char *haystack, char *needle)
{
	char *hay, *need;

	while (*haystack != 0)
	{
		hay = haystack;
		need = needle;
		while (*need != 0 && *haystack == *need)
		{
			haystack++;
			need++;
		}
		if (!*need)
			return (hay);
		haystack++;
	}
	return (0);
}
