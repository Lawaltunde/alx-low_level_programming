#include <stdio.h>
#include "main.h"

/**
  * _strchr - function that locates a character in a string
  * @s: pointer to char
  * @c: char
  * Return: pointer to the first occurrence of the character
  */
char *_strchr(char *s, char c)
{
	int count = 1, i = 0;

	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			count++;
			break;
		}
		i++;
	}
	return (s + count);
}
