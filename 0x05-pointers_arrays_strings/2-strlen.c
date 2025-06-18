#include <stdio.h>
#include "main.h"
/**
  * _strlen - function that returns the length of a string.
  * @s : pointer to character
  * Return : lenght of strings
  */
int _strlen(char *s)
{
	char p;
	int len = 0;

	while (p !=  '\0')
	{
		p = *(s + len);
		len++;
	}
	return (len - 1);
}
