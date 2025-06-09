#include <stdio.h>
#include "main.h"
/**
  * print_most_numbers - function that prints the numbers, from 0 to 9
  *
  */
void print_most_numbers(void)
{
	int i = 0; j = 0;

	for (i = 48; i <= 57; i++)
	{
		if (j != 2 || j != 4)
		{
			_putchar(i);
		}
	}
}
