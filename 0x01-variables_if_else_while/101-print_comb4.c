#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j, k;

	for (i = 1; i <= 11; i++)
	{
		for (j = (i + 1); j <= 10; j++)
		{
			for (k = (j + 1); k <= 10; k++)
			{
				putchar(47 + i);
				putchar(47 + j);
				putchar(47 + k);
				if (i < 8)
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
	return (0);
}
