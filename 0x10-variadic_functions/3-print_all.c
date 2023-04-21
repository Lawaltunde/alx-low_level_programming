#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - a function that prints anything.
 * @format: list of types of arguments passed to the function
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	va_list anyThing;
	unsigned int i = 0, j, count = 0;
	char *str;
	const char format_arg[] = "cifs";

	va_start(anyThing, format);
	while (format && format[i])
	{
		j = 0;
		while (format_arg[j])
		{
			if (format[i] == format_arg[j] && count)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(anyThing, int)), count = 1;
			break;
		case 'i':
			printf("%d", va_arg(anyThing, int)), count = 1;
			break;
		case 'f':
			printf("%f", va_arg(anyThing, double)), count = 1;
			break;
		case 's':
			str = va_arg(anyThing, char *), count = 1;
			if (!str)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		} i++;
	}
	printf("\n");
	va_end(anyThing);
}
