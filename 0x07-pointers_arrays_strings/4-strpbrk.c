#include <stdio.h>
#include "main.h"

/**
  * _strpbrk - function that searches a string for any of a set of bytes.
  * @s: pointer to char
  * @accept: pointer
  * Return: pointer
  */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j = 0;

	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);

}
