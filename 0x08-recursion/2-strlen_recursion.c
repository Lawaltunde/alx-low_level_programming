#include <stdio.h>
#include "main.h"

/**
  * _strlen_recursion - function that returns the length of a string
  * @s: pointer to seriers of characters
  *
  * Return: integer value of number of string (success)
  */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return 0;
	}
	return (1 + _strlen_recursion(s + 1));
}
