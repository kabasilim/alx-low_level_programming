#include "search_algos.h"

/**
 * binary_search - Searches for value in a sorted array
 * of ints using the Binary search algorithm
 *
 * @array: Pointer to the first element of the array
 * @size: Number of elements in array
 * @value: value to search for
 *
 * Return: Index where value is located or -1
 * if value is not present in array or if array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, mid;

	if (array && size > 0)
	{
		while (left <= right)
		{
			size_t index;

			mid = (right + left) / 2;
			printf("Searching in array: ");
			for (index = left; index < right; index++)
				printf("%d, ", array[index]);
			printf("%ld\n", right);
			if (array[mid] > value)
				right = mid - 1;
			else if (array[mid] < value)
				left = mid + 1;
			else
				return (mid);
		}
		return (-1);
	}
	else
		return (-1);
}
