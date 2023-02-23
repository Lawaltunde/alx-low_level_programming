#include <stdio.h>
/**
 * main - prints largest prime factor of num.
 * Return: Always 0.
 */

int main(void)
{
	long int a, j;

	a = 612852475143;
	for (j = 2; j <= a; j++)
	{
		if (a % j == 0)
		{
			a /= j;
			j--;
		}
	}
	printf("%ld\n", j);
	return (0);
}
