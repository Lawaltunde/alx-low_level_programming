#include <stdio.h>
#include "main.h"

/**
  * _strspn - function that gets the length of a prefix substring.
  * @s: pointer to char
  * @accept:pointer to char
  * Return: unsigned int
  */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int holder;
	int i = 0, j = 0;

	holder = 1;
	while (i >= 0)
	{
		while (s[j] != '\0')
		{
			if (accept[i] != s[j])
			{
				holder++;
			}
			else
			{
				return (holder);
			}
			j++;
		}
		i++;
	}
	return (holder);
}
