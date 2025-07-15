#include <stdio.h>
#include "main.h"
/**
 * _isdigit - function that checks for a digit
 * @c : argument
 * Return: Always 0 or 1 (success)
 */
int _isdigit(int c)
{
	int i;

	if (c >= 0 && c <= 9)
	{
		c += 48;
	}
	for (i = 48; i <= 57; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
