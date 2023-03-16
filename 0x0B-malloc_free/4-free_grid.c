#include "main.h"
#include <stdlib.h>

/**
  *free_grid - frees a previously created grid
  *@grid: 2D array to free
  *@height: height of the grid
  *
  *Return: nothing
  */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height != 0)
	{
		for (i = 0; i < height; i++)
			free(grid[i]);
	}
	free(grid);
}
