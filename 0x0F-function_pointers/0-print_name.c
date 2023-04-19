#include "function_pointers.h"

/**
 * print_name - a function that prints a name
 * @name: pointer to paramenter name.
 * @f: pointer to function or call back function.
 * Return: void.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}

}
