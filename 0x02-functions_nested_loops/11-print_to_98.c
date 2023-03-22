#include"main.h"

/**
 * print_to_98 - print n to 98 counts
 *           separated by comma, followed
 *           by space and number should be
 *           printed in order
 *
 * @n: input
*/
void print_to_98(int n)
{
	int a;

	if (n > 98)
		for (a = n; a > 98; --a)
			printf("%d, ", a);
	else
		for (a = n; a < 98; ++a)
			printf("%d, ", a);
	printf("98\n");
}
