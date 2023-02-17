#include <stdio.h>
/**
 * main - print out alphabet
 *
 * Result: Return 0 (Success)
 */
int main(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int a = 0;

	while (a < 23)
	{
		putchar(alphabet[a]);
		a++;
	}
	putchar('\n');
	return (0);
}
