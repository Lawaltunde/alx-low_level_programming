#include "main.h"

/**
 * _puts - function that prints a string, followed by a new line,
 * to stdout.
 * @s: input of char datatype.
 * Return: Void.
 */

void _puts(char *s)
{
	int i = 0;

	while (i >= 0)
	{
		if (s[i] == '\0')
		{
			_putchar('\n');
			break;
		}

	_putchar(s[i]);
	i++;
	}

}
