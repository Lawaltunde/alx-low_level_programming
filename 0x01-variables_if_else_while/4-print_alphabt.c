#include <stdio.h>
/**
 * main - Printing lowercase alphabet excluding q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	char Low_alph[24] = "abcdfghijklmnoprstuvwxyz";

	while (i < 24)
	{
		putchar(Low_alph[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
