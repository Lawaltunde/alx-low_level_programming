#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 26; i >= 1; i--)
	{
		putchar(96 + i);
	}
	putchar('\n');
	return (0);
}
