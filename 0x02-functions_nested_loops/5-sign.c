#include <stdio.h>
#include "main.h"
#include <stdbool.h>
/**
  * print_sign - function that prints the sign of a number
  * @n: argument
  * Return: 1 & prn + (n > 0), 0 & prn 0 (n = 0), -1 & prn - (n < 0)
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
