#include "main.h"
#include <stdlib.h>

/**
  *alloc_grid - return 2 dimentional array of integers,
  *             initializing each element with 0
  *@width: number of columns of the array
  *@height: number of rows of the array
  *
  *Return: If width or height is 0 or negative, or function fails - NULL
  *        Otherwise - a pointer to the two dimentional array of integers
  */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int) * height);
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (; i >= 0; i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}
