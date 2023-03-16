#include  <stdio.h>
/**
 *main - print the size of various types in C language.
 *
 *Return:0
 */
int main(void)
{
	char c;
	int i;
	long int a;
	long long int d;
	float f;

	prinf("size of char: %lu byte(S)\n", (unsigned long)sizeof(c));
	prinf("size of int: %lu byte(S)\n", (unsigned long)sizeof(i));
	prinf("size of long int: %lu byte(S)\n", (unsigned long)sizeof(a));
	prinf("size of long long int: %lu byte(S)\n", (unsigned long)sizeof(d));
	prinf("size of float: %lu byte(S)\n", (unsigned long)sizeof(f));
	return (0);
}
