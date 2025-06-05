#include <stdio.h>
#include "main.h"
#include <stdbool.h>
/**
  * print_sign - function that prints the sign of a number
  * @c: argument
  * Return: 1 and prints + (n > 0), 0 and prints 0 (n = 0), -1 and prints - (n < 0)
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if(n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
