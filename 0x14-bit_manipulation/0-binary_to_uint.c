#include "main.h"

/**
 * binary_to_uint - a function that converts a
 * binary number to an unsigned int.
 * @b: is pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b
 * that is not 0 or 1 
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int unsigned_int;
	int len, base_two;

	if (!b)
		return (0);

	unsigned_int = 0;

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, base_two = 1; len >= 0; len--, base_two *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			unsigned_int += base_two;
		}
	}

	return (unsigned_int);
}
