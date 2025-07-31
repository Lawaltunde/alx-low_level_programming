#ifndef VARIADIC_FUNCTION_H
#define VARIADIC_FUNCTION_H
#include <stdarg.h>
/**
  * printer - struct type with two members
  * @fmt: member of struct, char type
  * @fptr: member of struct, pointer to function
  */

typedef struct printer
{
	char fmt;
	void (*fptr)(va_list);
} printer;
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
