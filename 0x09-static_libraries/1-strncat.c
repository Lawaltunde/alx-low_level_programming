#include <stdio.h>
#include "main.h"

/**
  * _strncat - function that concatenates two strings
  *
  * @dest: pointer to a char dtype
  * @src: pointer to a char dtype
  * @n : agument of int dtype
  * Return: dest (success)
  */
char *_strncat(char *dest, char *src, int n)
{
	char *temp;
	int i = 0;

	temp = dest;
	while (*temp != '\0')
	{
		temp++;
	}
	while (i < n && src[i] != '\0')
	{
		*temp = src[i];
		temp++;
		i++;
	}
	temp = NULL;
	return (dest);
}
