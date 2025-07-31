#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
  * print_numbers - function that prints numbers
  * @separator: pointer to char
  * @n: unsigned int typ
  * Return: Nothing
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0, num = 0;

	if (separator == NULL)
	{
		return;
	}
	va_start(ap, n);

	while (i < n)
	{
		num = va_arg(ap, int);
		printf("%d", num);
		if (i != (n - 1))
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");
}
