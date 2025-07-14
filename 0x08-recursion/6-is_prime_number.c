#include <stdio.h>
#include "main.h"

/**
  * _helper - function
  * @n: int type
  * @checker: int type
  * Return: int value (success)
  */
int _helper(int n, int checker)
{
	if (n == checker)
	{
		return (1);
	}
	if (n % checker == 0)
	{
		return (0);
	}
	return (_helper(n, checker + 1));
}

/**
 * is_prime_number - function that returns 1 if the input
 * integer is a prime number, otherwise return 0
 * @n: int type
 * Return: int value (success)
 */

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	return (_helper(n, 2));
}
