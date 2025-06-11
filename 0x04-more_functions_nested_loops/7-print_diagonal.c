#include <stdio.h>
#include "main.h"
/**
  * print_diagonal - function that draws a diagonal line on the terminal
  * @n : argument
  */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i; j++)
			{
				if (j == i)
				{
					_putchar(92);
				}
				_putchar(' ');
			}
			if (i != n)
			{
				_putchar('\n');
			}
		}
	}
	_putchar('\n');
}
