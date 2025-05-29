#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: success (0)
 */

int main(void)
{
	int i, j, k, l;

	for (i = 1; i <= 10; i++)
	{
		for (j = i; j <= 10; j++)
		{
			for (k = j; k <= 10; k++)
			{
				for (l = k; l <= 10; l++)
				{
					putchar(47 + i);
					putchar(47 + j);
					putchar(' ');
					putchar(47 + k);
					putchar(47 + l);
					if (i <= 9)
					{
						putchar(',');
						putchar(' ');
					}
					else
					{
						putchar('\n');
					}
				}
			}
		}
	}
	return (0);
}
