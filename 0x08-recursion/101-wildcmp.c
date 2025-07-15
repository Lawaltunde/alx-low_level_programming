#include <stdio.h>
#include "main.h"

/**
  * wildcmp - function that compares two strings
  * @s1: pointer to char
  * @s2: pointer to char
  * Return: int value (success)
  */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '\0')
		{
			return (1);
		}
		if (wildcmp(s1, s2 + 1))
		{
			return (1);
		}
		if (*s1 != '\0' && wildcmp(s1 + 1, s2))
		{
			return (1);
		}
		return (0);
	}
	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
