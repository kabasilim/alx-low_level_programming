#include <stdio.h>

/**
 * main - Entry point to a program that prints
 * its name, followed by a new line.
 * @argc: Number of things entered int the command line
 * @argv: Array that holds the string value of argc
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
