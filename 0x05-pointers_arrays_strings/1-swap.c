#include <stdio.h>
#include "main.h"
/**
  * swap_int - function that swaps the values of two integers
  * @a : pointer to integer
  * @b : pointer to integer
  */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;

}
