#include <stdio.h>
#include <stdbool.h>
#include "main.h"
/**
  * times_table - function that prints the 9 times table
  *
  */
void times_table(void)
{
	int i, j, ans, temp, keep = 0, l;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			ans = (i * j);
			l = ans;
			if (ans > 9)
			{
				temp = ans;
				ans = temp % 10;
				keep = ((temp - ans) / 10);
				_putchar(keep + 48);

			}

			_putchar(ans + 48);
			if (j < 9)
			{
				_putchar(',');
				if (l < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else
				{
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
