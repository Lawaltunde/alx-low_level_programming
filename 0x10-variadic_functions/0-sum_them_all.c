#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its param.
 * @n: number of arguments.
 * Return: sum of all its parameters.
 * and If n == 0, return 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list sum_int;

	if (n == 0)
		return (0);

	va_start(sum_int, n);

	for (i = 0; i < n; i++)
		sum = sum + va_arg(sum_int, int);

	return (sum);
}
