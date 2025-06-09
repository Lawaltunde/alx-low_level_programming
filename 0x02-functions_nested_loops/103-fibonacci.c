#include <stdio.h>
#include "main.h"
/**
  * main - execution starts here
  *
  * Return: always 0 (success)
  */
int main(void)
{
	int a = 1, b = 2, c = 0, temp, sum;

	while (c <= 4000000)
	{
		c = a + b;
		temp = b;
		b = c;
		a = temp;
		if (c % 2 == 0)
		{
			sum = c;
		}
	}
	printf("%d\n", sum);
	return (0);
}
