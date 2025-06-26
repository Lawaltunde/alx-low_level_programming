#include <stdio.h>
#include "main.h"

/**
 * puts_half - function that prints half of a string
 *
 * @str: pointer to character
 *
 * Return: Nothing
 */
void puts_half(char *str)
{
	int n, count = 0;
	char *temp;

	temp = str;
	while (*temp != '\0')
	{
		count++;
		temp++;
	}
	if (count % 2 == 0)
	{
		n = count / 2;
	}
	else
	{
		n = (count - 1) / 2;
	}
	while (n > 0)
	{
		temp--;
		n--;
	}
	while (*temp != '\0')
	{
		_putchar(*temp);
		temp++;
	}
	_putchar('\n');
}
