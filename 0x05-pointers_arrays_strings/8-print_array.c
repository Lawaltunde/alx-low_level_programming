#include <stdio.h>
#include "main.h"

/**
 * print_array - unction that prints n elements of an array of integers.
 * @a: input of integer datatype
 * @n: number of elements of the array
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
		printf(", ");
	}
	printf("\n");

}
