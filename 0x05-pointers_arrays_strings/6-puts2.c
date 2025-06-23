#include <stdio.h>
#include "main.h"

/**
 * puts2 - function that prints every other character of a string
 *
 * @str: pointer to character
 *
 * Return: Nothing
 */
void puts2(char *str)
{
	int track = 0;

	while (*str != '\0')
	{
		if (track % 2 == 0)
		{
			_putchar(*str);
		}
		str++;
		track++;
	}
	_putchar('\n');
}
