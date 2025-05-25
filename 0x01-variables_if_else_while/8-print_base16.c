#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 1; i <= 9; i++)
	{
		putchar(48 + i);
	}
	for (j = 1; j <= 6; j++)
	{
		putchar(96 + j);
	}
	putchar('\n');
	return (0);
}
