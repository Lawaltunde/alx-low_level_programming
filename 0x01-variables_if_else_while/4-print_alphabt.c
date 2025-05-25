#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 1; i <= 26; i++)
	{
		j = i + 96;
		if (j != 101 && j != 113)
		{
			putchar(j);
		}
	}
	putchar('\n');
	return (0);
}
