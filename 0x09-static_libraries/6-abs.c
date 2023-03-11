#include "main.h"
#include <stdio.h>

/**
 * _abs - Computes the absolute value of an integer
 *
 * @i: input number as an integer.
 *
 * Return: Values
 */
int _abs(int i)
{
	scanf("%d", &i);

	if (i < 0)
	{
		i *= -1;
		return (i);
	}
	else
	if (i > 0)
	{
		i *= 1;
		return (i);
	}
	else
	{
		i = 0;
	return (0);
	}
}
