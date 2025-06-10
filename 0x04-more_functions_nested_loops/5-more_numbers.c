#include <stdio.h>
#include "main.h"
/**
  * more_numbers - function that prints 10 times the numbers, from 0 to 14
  */
void more_numbers(void)
{
	int i, j, keep, temp;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			temp = j % 10;
			keep = (j - temp) / 10;
			if (keep > 0)
			{
				_putchar(48 + keep);
			}
			_putchar(48 + temp);
		}
		_putchar('\n');
	}
}
