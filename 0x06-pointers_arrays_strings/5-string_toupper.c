#include <stdio.h>
#include "main.h"

/**
  * string_toupper - function that changes lowercase letters to upper
  * @src: pointer to char
  * Return: poibnter to upper case char
  */
char *string_toupper(char *src)
{
	char *temp;
	int i = 0;

	temp = src;
	while (*temp != '\0')
	{
		i = *temp;
		if(i >= 97 && i <= 122)
		{
			i -= 32;
		}
		*temp = i;
		temp++;
	}
	return src;
}
