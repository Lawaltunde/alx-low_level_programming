#include "main.h"

/**
 * _strlen - a function that returns the length of a string.
 * @s: input of char datatype.
 * Return: lenght of the string.
 */

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
