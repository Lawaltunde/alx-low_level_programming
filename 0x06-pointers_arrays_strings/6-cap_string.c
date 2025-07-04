#include <stdio.h>
#include "main.h"

/**
  * cap_string - function that capitalizes all words of a string
  * @src: pointer to char
  * Return: Nothing
  */

char *cap_string(char *src)
{
	char *temp;
	int holder, i = 0;

	temp = src;
	holder = temp[0];
	if (holder >= 97 && holder <= 122)
	{
		src[0] = (holder - 32);
	}
	while (*temp != '\0')
	{
		if (temp[i] == ' ' || temp[i] == ',' || temp[i] == ';' || temp[i] == '.' || temp[i] == '!' || temp[i] == '?' || temp[i] == '\"' || temp[i] == '(' || temp[i] == ')' || temp[i] == '{' || temp[i] == '}')
		{
			holder = temp[i + 1];
			if (holder >= 97 && holder <= 122)
			{
				temp[i + 1] = (holder - 32);
			}
		}
		temp++;
		i++;
	}
	return (src);
}
