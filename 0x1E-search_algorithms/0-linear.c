#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of
 * integers using the Linear search algorithm
 *
 * @array: Pointer to the first element of the array
 * @size: Number of elements in array
 * @value: value to search for
 *
 * Return: Index where value is located or -1
 * if value is not present in array or if array is NULL
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index;

	if (array && size > 0)
	{
		for (index = 0; index < size; index++)
		{
			printf("Value checked array[%lu] = [%d]\n", index, array[index]);

			if (array[index] == value)
				return (index);
		}
	}
	return (-1);
}
