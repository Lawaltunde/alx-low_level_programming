#include <stdio.h>
/**
 * main - Printing lowercase alphabet in reverse,
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 27;
	char Low_alph[26] = "abcdefghijklmnopqrstuvwxyz";

	while (i > 0)
	{
		putchar(Low_alph[i]);
		i--;
	}
	putchar('\n');
	return (0);
}
