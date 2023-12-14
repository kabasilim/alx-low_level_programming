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
 * binary_search - searches for a value in an array of integers using
 * the Binary search algorithm
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value to search for
 * Return: first index where value is located or -1 otherwise
*/
int binary_search(int *array, size_t size, int value)
{
	size_t start, end, middle;

	start = 0;
	end = size - 1;

	if (array != NULL)
	{
		while (start <= end)
		{
			printf("Searching in array: ");
			print_array(array, start, end);
			middle = start + (end - start) / 2;
			if (array[middle] > value)
				end = middle - 1;
			else if (array[middle] < value)
				start = middle + 1;
			else
				return (middle);
		}
	}
	return (-1);
}

/**
 * exponential_search - searches for a value in an array of integers using
 * the interpolation search algorithm
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value to search for
 * Return: first index where value is located or -1 otherwise
*/

int exponential_search(int *array, size_t size, int value)
{
	size_t bound, prev, end, newSize;
	int *newArray;
	int index;

	if (array != NULL)
	{
		if (array[0] != value)
		{
			bound = 1;
			while (bound < size && array[bound] < value)
			{
				printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
				bound *= 2;
			}
			prev = bound / 2;
			if (bound > size - 1)
				end = size - 1;
			else
				end = bound;
			printf("Value found between indexes [%lu] and [%lu]\n",
			prev, end);
			newArray = array + prev;
			newSize = end - prev + 1;
			index = binary_search(newArray, newSize, value);
			if (index == -1)
				return (-1);
			else
				return (index + prev);
		}
		else
		{
			return (0);
		}
	}
	return (-1);
}
