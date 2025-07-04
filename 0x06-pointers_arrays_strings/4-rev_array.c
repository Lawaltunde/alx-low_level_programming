#include <stdio.h>
#include "main.h"

/**
  * reverse_array - function that reverses the content of an array
  * @a: pointer to int
  * @n: argument int
  * Return: Nothing
  */

void reverse_array(int *a, int n)
{
	int temp, i = 0, j;

	j = n / 2;
	n -= 1;
	while (j >= 0)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		j--;
		i++;
		n--;
	}
}
