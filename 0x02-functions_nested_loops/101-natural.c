#include <stdio.h>
/**
 * main - starting point
 *
 * Return: Value 0 (Successful)
 */
int main(void)
{
	int n;

	for (n = 3; n < 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			printf("%d\n", n);
		}
	};
	return (0);
}
