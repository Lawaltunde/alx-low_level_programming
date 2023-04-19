#include "function_pointers.h"

/**
 * array_iterator - a function that executes a function given
 * as a parameter on each element of an array.
 * @array: input array
 * @size: size of the array
 * @action: function call
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned k;

	if (action && array)
	{
		for (k = 0; k < size; k++)
			action(array[k]);
	}
}
