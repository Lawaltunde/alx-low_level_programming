#include <stdio.h>
#include "main.h"

/**
  * _strlen - function that calc str len
  * @s: pointer to char
  * @i: int type
  * Return: int value (success)
  */

int _strlen(char *s, int i)
{
	if (s[i] == '\0')
	{
		return (i);
	}
	return (_strlen(s, i + 1));
}

/**
  * is_helper - function
  * @s: pointer to char
  * @start: int type
  * @end: int type
  * Return: int (success)
  */
int is_helper(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}
	return (is_helper(s, start + 1, end - 1));
}

/**
  * is_palindrome - function that returns 1 if a string
  * is a palindrome and 0 if not
  * @s: pointer
  * Return: int value (success)
  */

int is_palindrome(char *s)
{
	int len = _strlen(s, 0);

	if (*s == ' ')
	{
		return (1);
	}
	return (is_helper(s, 0, len - 1));
}
