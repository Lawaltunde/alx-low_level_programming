#include <stdio.h>
#include "main.h"

/**
  * _strcat - function that concatenates two strings.
  *
  * @dest: pointer to a char dtype
  * @src: pointer to a char dtype
  *
  * Return: dest (success)
  */

char *_strcat(char *dest, char *src)
{
	char *temp;
	int i = 0;

	temp = dest;
	while (*temp != '\0')
	{
		temp++;
	}
	while (src[i] != '\0')
	{
		*temp = src[i];
		temp++;
		i++;
	}
	return (dest);
}
