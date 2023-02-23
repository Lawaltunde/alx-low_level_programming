#include "main.h"

/**
 * print_square - function that prints a square
 * @size: is the input symbol of inegeter data type
 * Return: Void
 */
void print_square(int size)
{
	if (size > 0)
	{

	int i;

	for (i = 0; i < size; i++)
	{
		int j;

		for (j = 0; j < size; j++)
		{
			_putchar(35);
		}

		_putchar(35);
		_putchar('\n');

	}
	}

	else
	{
		_putchar('\n');
	}
}
