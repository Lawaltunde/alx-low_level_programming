#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers.
 * @a: input of integer data type.
 * @b: inut of integer data type.
 * Return: Void.
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
