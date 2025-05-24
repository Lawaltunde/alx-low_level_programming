#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 26; i++)
	{
		putchar(96 + i);
	}
	putchar('\n');
	return (0);
}
