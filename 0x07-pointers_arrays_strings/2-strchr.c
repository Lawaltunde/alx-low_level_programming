#include "main.h"
/**
 * _strchr - a function that locates locates a character
 * in a string.
 * @s: string.
 * @c: character.
 * Return: the pointer to the first occurrence
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (*(s + i) != '\0')
	{
	if (*(s + i) == c)
		return (s + i);
	i++;
	}
	return ('\0');
}
