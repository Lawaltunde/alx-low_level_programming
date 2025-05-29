#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j, k;

	for (i = 1; i <= 10; i++)
	{
		for (j = (i + 1); j <= 9; j++)
		{
			for (k = (j + 1); k <= 9; k++)
			{
				putchar(47 + i);
				putchar(47 + j);
				putchar(47 + k);
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
