#include "main.h"
#include <stdio.h>
/**
 * * check_values - checks for two identical strings
 * * @s1: string
 * * @s2: string
 * * @i: int
 * * @j: int
 * * @wild: int
 * * Return: 1 if successful.
*/
int check_values(char *s1, char *s2, int i, int j, int wild)
{

	if (s1[i] != '\0')
	{
		if (s2[j] == '\0')
			return (0);
		else if (s2[j] == '*')
		{
			if (s2[j + 1] == '*')
			{
				return (check_values(s1, s2, i, j + 1, j));
			}
			else if (s2[j + 1] == s1[i])
			{
				return (check_values(s1, s2, i, j + 1, j));
			}
			else if (s1[i + 1] != s2[j + 1])
			{
				return (check_values(s1, s2, i + 1, j, j));
			}
			else if (s1[i + 1] == s2[j + 1])
			{
				return (check_values(s1, s2, i + 1, j + 1, j));
			}
		}
		else if ((s1[i] == s2[j]) || (s2[j] == '*' && s2[j + 1] == s1[i + 1]))
		{
			return (check_values(s1, s2, i + 1, j + 1, wild));
		}
		else
		{
			if (wild == -1)
			{
				return (0);
			}
			return (check_values(s1, s2, i, wild, wild));
		}
	}
	if (s2[j] != '\0')
		return (0);
	return (1);
}

/**
 * * wildcmp - compares two strings.
 * * @s1: string
 * * @s2: string
 * * Return: 1 if identical, 0 otherwise.
*/

int wildcmp(char *s1, char *s2)
{
	return (check_values(s1, s2, 0, 0, -1));
}
