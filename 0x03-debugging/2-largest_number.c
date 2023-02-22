#include "main.h"

/**
 * largest_number - returns the large out  of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: large number
 */

int largest_number(int a, int b, int c)
{
	int large;

	if (a > b && b > c)
	{
	large = a;
	}
	else if (b > a && a > c)
	{
	large = b;
	}
	else
	{
	large = c;
	}
	return (large);
}
