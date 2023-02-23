#include "main.h"

/**
 * print_number - prints an integer.
 * @n: input of datatype integer.
 * Return: no return.
 */
void print_number(int n)
{
	unsigned int b, d, count;

	if (n < 0)
	{
		_putchar(45);
		b = n * -1;
	}
	else
	{
		b = n;
	}

	d = b;
	count = 1;

	while (d > 9)
	{
		d /= 10;
		count *= 10;
	}

	for (; count >= 1; count /= 10)
	{
		_putchar(((b / count) % 10) + 48);
	}
}
