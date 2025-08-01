#include <stdio.h>
#include "function_pointers.h"
/**
  * int_index - function that searches for an integer
  * @array: pointer to int
  * @size: int type
  * @cmp: function pointer
  * Return: int value
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
	{
		return (-1);
	}
	if (array != NULL && cmp != NULL)
	{
		while (i < size)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
			i++;
		}
	}
	return (-1);
}
