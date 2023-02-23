#include "main.h"

/**
 * print_line - function that draws a straight line.
 * @n: input which is of integer datatype.
 * Return: void
 */
void print_line(int n)
{
	if (n > 0)
	{
	int a;

	for (a = 0; a < n; a++)
	{
		_putchar(95);
	}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
