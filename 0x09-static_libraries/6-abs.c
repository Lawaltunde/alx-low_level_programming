#include "main.h"
#include <stdio.h>

/**
 * _abs - Computes the absolute value of an integer
 *
 * @n: input number as an integer.
 *
 * Return: Values
 */
int _abs(int n)
{
	scanf("%d", &n);

	if (n < 0)
	{
		n *= -1;
		return (n);
	}
	else
	if (n > 0)
	{
		n *= 1;
		return (n);
	}
	else
	{
		n = 0;
	return (0);
	}
}
