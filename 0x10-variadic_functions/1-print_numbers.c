#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function that prints numbers,
 * followed by a new line.
 * @separator: is the string to be printed between numbers
 * @n: is the number of integers passed
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list printout;
	unsigned int i;

	va_start(printout, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(printout, int));
		if (separator == NULL)
			printf("%s", " ");
		else
			printf("%s", separator);
	}
	printf("\n");
}
