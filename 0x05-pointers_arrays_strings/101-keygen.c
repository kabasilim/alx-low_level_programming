#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: void
*/

int main(void)
{
	char a[100];
	int x, y, z;

	y = 0;
	z = 0;
	srand(time(NULL));
	while (y < 2645)
	{
		x = rand() % 122;
		if (x > 32)
		{
			a[z++] = y;
			y += x;
		}
	}
	a[z++] = (2772 - y);
	a[z] = '\0';
	printf("%s", a);
	return (0);
}

