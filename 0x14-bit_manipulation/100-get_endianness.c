#include "main.h"

/**
 * get_endianness - function that checks the endianness
 * Return: (0) if big endian, (1) if little endian
 */

int get_endianness(void)
{
	unsigned int a = 1;
	char *ch;

	ch = (char *) &a;

	return ((int)*ch);
}
