#include <stdio.h>
#include "main.h"

/**
 * print_array - function that prints n elements of an array of integers
 *
 * @a: pointer to int
 * @n: argument int
 *
 * Return: Nothing
 */
void print_array(int *a, int n)
{
	int *temp, i;

	temp = a;
	for (i = 0; i < n; i++)
	{
		printf("%d", *temp);
		if (i < (n - 1))
		{
			printf(", ");
		}
		temp++;
	}
	printf("\n");
}
