#include <stdio.h>
#include "main.h"

/**
  * _support - function
  * @n: int type
  * @guess: int type
  * Return: int value (success)
  */

int _support(int n, int guess)
{
	if (guess * guess > n)
	{
		return (-1);
	}
	if (guess * guess ==  n)
	{
		return (guess);
	}
	return (_support(n, guess + 1));
}

/**
  * _sqrt_recursion - function that returns the natural square root
  * @n: int type
  * Return: int value (success)
  */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_support(n, 0));
}
