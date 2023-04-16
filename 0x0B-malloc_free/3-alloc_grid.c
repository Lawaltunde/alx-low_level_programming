#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer
 * to a 2 dimensional array of integers
 * @width: width of the array.
 * @height: height of the array.
 * Return: a pointer to a 2 dimensional array of integers.
 */

int **alloc_grid(int width, int height)
{
	int k, l;
	int ** grid;

	if (width <= 0 || height <= 0)
		return NULL;
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return NULL;

	for (k = 0; k < height; k++)
	{
		grid[k] = malloc(width * sizeof(int));
		if (grid[k] == NULL)
		{
			for (k--; k >= 0; k--)
				free (grid[k]);
			free (grid[k]);
			return NULL;
		}
	}
	for (k = 0; k < height; k++)
	{
		for (l = 0; l < width; l++)
		{
			grid[k][l] = 0;
		}

	}
	return (grid);
}
