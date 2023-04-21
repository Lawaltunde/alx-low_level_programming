#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function that prints strings,
 * followed by a new line.
 * @separator: the string to be printed between strings
 * @n:the number of strings passed to the function
 * Return: Nothing.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *ptr;
	va_list prnt;

	va_start(prnt, n);
	for (i = 0; i < n; i++)
	{
		ptr = va_arg(prnt, char *);

		if (!ptr)
			printf("(nil)");
		else
			printf("%s", ptr);
		if (separator && i < (n - 1))
			printf("%s", separator);

	}
	printf("\n");
	va_end(prnt);
}
