#include <stdio.h>
#include "main.h"

/**
  * _strncpy - function that copies a string.
  *
  * @dest: pointer to a char dtype
  * @src: pointer to a char dtype
  * @n : agument of int dtype
  * Return: dest (success)
  */
char *_strncpy(char *dest, char *src, int n)
{
	char *temp;
	int i = 0;

	temp = dest;
	while (i < n && src[i] != '\0')
	{
		*temp = src[i];
		i++;
		temp++;
	}
	if (i < n)
	{
		*temp = '\0';
	}
	return (dest);
}
