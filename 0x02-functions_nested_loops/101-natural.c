#include <stdio.h>
/**
 * main - starting point
 *
 * Return: Value 0 (Successful)
 */
int main(void)
{
	int n;

	for (n = 10; n < 24; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			printf("%d\n", n);
		}
	}
	return (0);
}
