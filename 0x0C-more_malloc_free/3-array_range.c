#include <stdio.h>
#include <stdlib.h>

/**
  * array_range - function that creates an array of integers
  * @min: int type
  * @max: int type
  * Return: Pointer to int type
  */
int *array_range(int min, int max)
{
	int *ptr, i = 0;

	if (min > max)
	{
		return (NULL);
	}
	ptr = malloc((1 + max - min) * sizeof(int));
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (min <= max)
	{
		ptr[i] = min;
		min++;
		i++;
	}
	return (ptr);
}
