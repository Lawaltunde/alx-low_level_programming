#include <stdio.h>
#include "main.h"
/**
  * print_triangle - function that prints a triangle
  * @size : argument
  */
void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = size; i >= 1; i--)
		{
			for (j = 1; j <= size; j++)
			{
				if(j >= i)
				{
					_putchar('#');
				}
				else
				{
					_putchar(' ');
				}
				if (j == size)
				{
					_putchar('\n');
				}
			}
		}
	}
	_putchar('\n');
}
