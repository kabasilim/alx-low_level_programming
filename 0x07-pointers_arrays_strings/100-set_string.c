#include "main.h"
/**
 * set_string - function that sets the value of a pointer to a char
 * @to: pointer to a string
 * @s: the string
 * Return: void
*/
void set_string(char **s, char *to)
{
	*s = to;
}
