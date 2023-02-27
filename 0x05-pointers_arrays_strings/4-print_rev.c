#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse,
 * followed by a new line.
 * @s: input of char datatye.
 * Return: void.
 */

void print_rev(char *s)
{
	int i = 0;

	while (0 >= 0)
	{
		if (s[i] == '\0')
			break;
		i++;
	}

	for (i--; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
