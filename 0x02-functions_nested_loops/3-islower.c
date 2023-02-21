#include "main.h"
/**
 * _islower - function that checks for lowercase character.
 *
 * @c: The character in ASCII standard
 *
 * Return: 1 for lowercase character. 0 for the uppercase.
 */
int _islower(int c)
{
	if (c <= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
