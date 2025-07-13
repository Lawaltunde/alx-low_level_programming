#include <stdio.h>
#include "main.h"

/**
  * _puts_recursion - function that prints a string, followed by a new line.
  * @s: pointer to seriers of characters
  *
  * Return: Nothing
  */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
