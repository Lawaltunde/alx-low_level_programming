#include "main.h"

/**
 * _strpbrk - searches a string for any of set byte
 * @s: first string.
 * @accept: second string.
 * Return: a pointer to the byte in s
 *  one of the bytes in accept, or NULL if
 *  no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0, j;

	while (s[i] != '\0')
	{
	for (j = 0; accept[j] != '\0'; j++)
	{
		if (*(s + i) == *(accept + j))
			return (s + i);
	}
	i++;
	}
	return  ('\0');
}
