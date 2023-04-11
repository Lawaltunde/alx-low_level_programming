#include "main.h"
#include <stdlib.h>

/**
 * create_array -  a function that creates an array
 * of chars, and initializes it with a specific char.
 * @size: size of the array.
 * @c:input character.
 * Return: NULL if size = 0 and
 * a pointer to the array, or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	if (size == 0)
		return ('\0');

	p = malloc(size * sizeof(char));

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		p[i] = c;
	return (p);
	}
	else
		return ('\0');
	free(p);
}
