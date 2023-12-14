#include "search_algos.h"

/**
 * print_array - prints an array of integers
 * @a: array to be checked
 * @start: start index of the array
 * @end: end index of the array
 * Return: void
*/
void print_array(int *a, int start, int end)
{
	while (start <= end)
	{
		printf("%d", a[start]);
		if (start < (end))
			printf(", ");
		start++;
	}
	printf("\n");
}
/**
 * binary_s - helper function for the advanced binary search
 * @array: array to be checked
 * @value: value to be checked
 * @start: start index of the array
 * @end: end index of the array
 * Return: first index value is found
*/
int binary_s(int *array, int value, int start, int end)
{
	int middle;

	if (start > end)
	{
		return (-1);
	}
	else
	{
		middle = start + (end - start) / 2;
		printf("Searching in array: ");
		print_array(array, start, end);
		if (value == array[middle - 1])
		{
			return (binary_s(array, value, start, middle));
		}
		else if (value == array[middle])
		{
			return (middle);
		}
		else if (value < array[middle])
		{
			return (binary_s(array, value, start, middle - 1));
		}
		else
		{
			return (binary_s(array, value, middle + 1, end));
		}
	}
}
/**
 * advanced_binary - searches for a value in an array of integers using
 * the Binary search algorithm
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value to search for
 * Return: first index where value is located or -1 otherwise
*/
int advanced_binary(int *array, size_t size, int value)
{
	size_t start, end;

	if (array != NULL && size > 0)
	{
		start = 0;
		end = size - 1;
		return (binary_s(array, value, start, end));
	}
	return (-1);
}
