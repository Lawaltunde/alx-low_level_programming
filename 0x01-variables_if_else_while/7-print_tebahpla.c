#include <stdio.h>
/**
 * main - Printing lowercase alphabet in reverse,
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 122;

	while (i > 96)
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
