#include <stdio.h>
#include "main.h"

/**
 * print_rev -  function that prints a string, in reverse
 *
 * @s: pointer to character
 *
 * Return: Nothing
 */
void print_rev(char *s)
{
	int size = 0, i;
	char *temp;

	temp = s;
	while (*temp != '\0')
	{
		size++;
		temp++;
	}
	for (i = (size - 1); i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
