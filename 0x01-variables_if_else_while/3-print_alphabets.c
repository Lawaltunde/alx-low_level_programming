#include <stdio.h>
/**
 * main - Printing uppercase and lowercase alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	int j = 0;
	char uppLow_alph[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	while (i < 52)
	{
		putchar(uppLow_alph[i]);
	}
	putchar('\n');
	return (0);
}
