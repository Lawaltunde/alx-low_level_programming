#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 *
 * @i: input number of integer data type
 *
 * Return: Value of last digit
 */
int print_last_digit(int i)
{
	int b = -1;
	int c;

	c = i % 10;

	if (i < 0)
	{
		i *= b;
		_putchar(c + '0');
		return (c);
	}
	else
	{
		_putchar(c + '0');
		return (c);
	}

}
