#include  <stdio.h>
/**
 *main - print the size of various types in C language.
 *
 *Return:0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	prinf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(a));
	prinf("Size of int: %lu byte(s)\n", (unsigned long)sizeof(b));
	prinf("Size of long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	prinf("Size of long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
	prinf("Size of float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
