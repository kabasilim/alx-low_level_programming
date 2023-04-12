#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2-dimensional array
 * @grid: pointer to two dimensional array
 * @height: height of array
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
