#include <stdio.h>

/**
 * main - A program that multiplies two numbers.
 * @argc: Number of things in command line
 * @argv: Arrays of string of value
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
