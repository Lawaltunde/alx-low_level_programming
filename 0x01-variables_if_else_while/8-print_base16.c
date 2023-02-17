#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase,(0 to 9 and a to f)
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for  (i = 97; i < 103; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
