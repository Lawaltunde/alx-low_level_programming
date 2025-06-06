#include <stdio.h>
#include "main.h"
/**
  * jack_bauer -  function that prints every minute of the day
  *
  */
void jack_bauer(void)
{
	int i, j, k, l;

	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = 0; k <= 5; k++)
			{
				for (l = 0; l <= 9; l++)
				{
					if (i == 2 && j == 4)
					{
						return;
					}
					_putchar(48 + i);
					_putchar(48 + j);
					_putchar(':');
					_putchar(48 + k);
					_putchar(48 + l);
					_putchar('\n');
				}
			}
		}
	}
}
