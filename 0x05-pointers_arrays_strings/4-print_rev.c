#include "main.h"

/**
 * print_rev - prints a string in reverse
 *
 * @s: string parameter input
 *
 * Return: void
*/
void print_rev(char *s)
{
	int a;

	/*finds the length of string without null character*/
	for (a = 0; s[a] != '\0'; a++)
		;

	/*print char from the last index as you decrement*/
	for (a--; a >= 0; a--)
		_putchar(s[a]);
	_putchar('\n');
}
