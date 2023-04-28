#include <stdio.h>

/**
 * printMessage - function that runs before main
 */

void __attribute__ ((constructor)) printMessage()
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}

