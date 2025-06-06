#include <stdio.h>
#include "main.h"

/**
  * print_last_digit - function that prints the last digit of a number
  * @c: argument
  * Return: Last digit
  */
int print_last_digit(int c)
{
	int ans;

	if (c < 0)
	{
		c *= -1;
	}
	ans = c % 10;
	_putchar(48 + ans);
	return (ans);
}
