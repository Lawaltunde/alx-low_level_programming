#include <stdio.h>
#include "main.h"

/**
  * print_diagsums - function that prints the sum of the two diagonals..
  * @a: pointer to array of int
  * @size : int parameter
  * Return: Nothing
  */
void print_diagsums(int *a, int size)
{
	int i, j, w = 0, x, k = 0, sum = 0, sum1 = 0;

	x = size - 1;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (j == k)
			{
				sum += *(a + w);
			}
			if (j == x)
			{
				sum1 += *(a + w);
			}
		w++;
		}
		k++;
		x--;
	}
	printf("%d, %d\n", sum, sum1);
}
