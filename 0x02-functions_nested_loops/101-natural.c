#include <stdio.h>
/**
 * main - starting point
 *
 * Return: Value 0 (Successful)
 */
int main(void)
{
	int n, c;

	for (n = 1; n < 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			c += n;
		}
	}
	 printf("%d\n", c);
	return (0);
}
