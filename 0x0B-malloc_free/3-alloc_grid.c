#include <stdio.h>
#include <stdlib.h>

/**
  * alloc_grid - function that returns a pointer to a
  * 2 dimensional array of integers
  * @width: int type
  * @height: int type
  * Return: pointer to a pointer int
  */
int **alloc_grid(int width, int height)
{
	int **ptr, w = 0, h = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	ptr = malloc(height * sizeof(int*));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (h = 0; h < height; h++)
	{
		ptr[h] = (int *)malloc(width * sizeof(int));
		if (ptr[h] == NULL)
		{
			while (h > 0)
			{
				h--;
				free(ptr[h]);
			}
			free(ptr[h]);
			return (NULL);
		}
		for (w = 0; w < width; w++)
		{
			ptr[h][w] = 0;
		}
	}
	return (ptr);
}
