#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - function that prints numbers
 * @separator: pointer to char
 * @n: unsigned int typ
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;
	char *value;

	va_start(ap, n);

	while (i < n)
	{
		value = va_arg(ap, char *);
		if (value != NULL)
		{
			printf("%s", value);
		}
		else
		{
			printf("nil");
		}
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
		i++;
	}
	va_end(ap);
	printf("\n");
}
