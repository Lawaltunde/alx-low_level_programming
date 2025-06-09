#include <stdio.h>
#include "main.h"
/**
  * main - execution starts here
  * Return: always 0 (success)
  */
int main(void)
{
	int i, j = 0, k, sum = 0, temp = 0, res[10], counter = 0;

	for (i = 3; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	while (sum != 0)
	{
		temp = sum % 10;
		sum = sum / 10;
		res[j] = temp;
		temp = 0;
		j++;
		counter++;
	}
	for (k = (counter - 1); k >= 0; k--)
	{
		_putchar(48 + res[k]);
	}
	_putchar('\n');
	return (0);
}
