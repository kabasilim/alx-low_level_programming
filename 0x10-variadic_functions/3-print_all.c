#include <stdio.h>
#include "variadic_functions.h"
#include <stdlib.h>

/**
 * print_int - prints an integer
 * @ap: arguments
 * Return: void
*/

void print_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * print_char - prints a character
 * @ap: arguments
 * Return: void
*/

void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * print_float - prints a float
 * @ap: arguments
 * Return: void
*/

void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * print_string - prints a string
 * @ap: arguments
 * Return: void
*/

void print_string(va_list ap)
{
	char *p = va_arg(ap, char *);

	printf("%s", p == NULL ? "(nil)" : p);
}
/**
 * print_all - function that prints anything
 * @format: variable format
 * Return: void
*/

void print_all(const char * const format, ...)
{
	int i, j;
	va_list ap;

	pt_t pts[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};
	i = 0;
	va_start(ap, format);
	while (format && format[i])
	{
		j = 0;

		while (j < 4)
		{
			if (format[i] == *pts[j].c)
			{
				pts[j].f(ap);

				if (format[i + 1] != '\0')
				{
					printf(", ");
				}
			}
			j++;
		}
		i++;
	}
	va_end(ap);
	printf("\n");
}
