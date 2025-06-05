#include <stdio.h>
#include "main.h"
/**
  * _abs - function that computes the absolute value of an integer
  * @c: argument
  * Return: absolute value
  */
int _abs(int c)
{
	if (c >= 0)
	{
		return (c);
	}
	else
	{
		return (-1 * c);
	}
}
