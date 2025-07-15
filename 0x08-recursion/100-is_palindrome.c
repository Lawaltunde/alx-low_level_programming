#include <stdio.h>
#include "main.h"

/**
  * is_helper - function
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
	int end, count = 0;

	if (*s == ' ')
	{
		return (1);
	}
	while (s[count] != '\0')
	{
		count++;
	}
	end = count - 1;
	return (is_helper(s, 0, end));
}
