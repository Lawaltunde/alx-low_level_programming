#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * _puts - function that prints a string, followed by a new line
 *
 * @str: pointer to character
 *
 * Return: Nothing
 */
void _puts(char *str)
{
	char *temp;

	temp = str;
	while (*temp != '\0')
	{
		write(1, temp, 1);
			temp++;
	}
	_putchar('\n');
}
