#include "search_algos.h"

/**
 * interpolation_search - searches for a value in an array of integers using
 * the interpolation search algorithm
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value to search for
 * Return: first index where value is located or -1 otherwise
*/

int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, high, low;

	low = 0;
	high = size - 1;

	if (array != NULL)
	{
		while (low <= high && array[low] <= value)
		{
			pos = low + (((double)(high - low) /
			(array[high] - array[low])) * (value - array[low]));

			if (pos > high)
			{
				printf("Value checked array[%lu] is out of range\n", pos);
				return (-1);
			}
			printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
			if (array[pos] == value)
				return (pos);
			if (array[pos] < value)
				low = pos + 1;
			if (array[pos] > value)
				high = pos - 1;
		}
	}
	return (-1);
}
