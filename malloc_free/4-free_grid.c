#include "main.h"
#include <stdlib.h>

/**
* free_grid - frees memory allocated by alloc_grid
* Description:
* @grid: pointer to allocated 2D array
* @height: height of 2D array
* Return: void
*/

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
	{
		return;
	}

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);

}
