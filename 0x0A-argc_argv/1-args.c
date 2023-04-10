#include <stdio.h>

/**
 * main -  A program that p`rints the number of
 * arguments passed into it
 * @argc: Number of things entered int the command line
 * @argv: Arrays that hold the string value
 * Return: 0
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	int i = 0, f;

	if (i < argc)
	{
		f = i;
		i++;
	}
	printf("%d\n", f);
	return (0);
}
