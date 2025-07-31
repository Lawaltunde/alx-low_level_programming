#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
#include <string.h>

/**
  * printChar - function that prints char
  * @arg: argument of object va_list type
  * Return: Nothing
  */

void printChar(va_list arg)
{
	printf("%c", va_arg(arg, int));
}

/**
  * printInt - function that prints int
  * @arg: argument of object va_list type
  * Return: Nothing
  */
void printInt(va_list arg)
{
	printf("%d", va_arg(arg, int));
}

/**
  * printFloat - function that prints float
  * @arg: argument of object va_list type
  * Return: Nothing
  */

void printFloat(va_list arg)
{
	printf("%f", va_arg(arg, double));
}

/**
  * printString - function that prints collection of char
  * @arg: argument of object va_list type
  * Return: Nothing
  */

void printString(va_list arg)
{
	char *holder = va_arg(arg, char *);

	if (holder == NULL)
	{
		holder = "(nil)";
	}
	printf("%s", holder);
}

/**
  * print_all - function that prints anything.
  * @format: constant pointer to char
  * Return: Nothing
  */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0, j;
	char *s = "";
	printer printers[] = {
		{'c', printChar},
		{'i', printInt},
		{'f', printFloat},
		{'s', printString}
	};

	va_start(ap, format);
	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (printers[j].fmt == format[i])
			{
				printf("%s", s);
				printers[j].fptr(ap);
				s = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(ap);
	printf("\n");
}
