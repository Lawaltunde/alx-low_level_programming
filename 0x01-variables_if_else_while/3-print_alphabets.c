#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (j = 1; j <= 26; j++)
	{
		putchar(96 + j);
	}

	for (i = 1; i <= 27; i++)
	{
		if (i == 27)
		{
			i++;
			i *= -1;
		}
		putchar(64 + i);
		if (i < 0)
		{
			break;
		}
	}
	putchar('\n');
	return (0);
}
