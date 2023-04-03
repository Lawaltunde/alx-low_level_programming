#include "main.h"

/**
* _memset - function that fills memory with a constant byte.
* @s: input pointer which  stores address.
* @b: number of byte
* @n: size.
* Return: returns s.
*/

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < (int) n; i++)
		*(s + i) = b;

	return (s);
}
