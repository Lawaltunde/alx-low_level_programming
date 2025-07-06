#include <stdio.h>
#include "main.h"
#include <stdbool.h>

/**
  * _strstr - function that locates a substring.
  * @haystack : pointer
  * @needle: pointer
  * Return: pointer
  */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, k = 0, l = 0;
	bool check = true;

	if (needle[0] == '\0')
	{
        	return (haystack);
	}
	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			l = i;
			while (needle[k] != '\0')
			{
				if (haystack[l] != needle[k] || haystack[l] == '\0')
				{
					check = false;
					break;
				}
				l++;
				k++;
			}
			if (check)
			{
				return (&haystack[i]);
			}
		}
	i++;
	}
	return (NULL);
}
