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

	if (i >= 0)
	{
		c = i % 10;
		_putchar(c + '0');
		return (c);
	}
	else
	{
		i *= b;
		c = i % 10;
		_putchar(c + '0');
		return (c);
	}

}
