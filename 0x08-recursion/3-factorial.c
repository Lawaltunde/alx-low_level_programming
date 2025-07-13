#include <stdio.h>
#include "main.h"

/**
  * factorial - function that returns the factorial of a given number
  * @n: argument of int data type
  *
  * Return: integer value (success)
  */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}

