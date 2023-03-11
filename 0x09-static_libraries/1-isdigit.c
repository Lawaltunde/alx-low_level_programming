#include "main.h"

/**
 * _isdigit - a function that checks for a digit
 * @c: input of datatype integer
 * Return: 0 (success)
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
