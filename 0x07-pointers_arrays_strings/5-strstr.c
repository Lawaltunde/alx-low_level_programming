#include <stdio.h>
#include "main.h"

/**
  * _strstr - function that locates a substring.
  * @haystack : pointer
  * @needle: pointer
  * Return: pointer
  */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, k = 0, l = 0;

	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			l = i;
			while (needle[k] != '\0')
			{
				if (haystack[l] != needle[k])
				{
					break;
				}
				l++;
				k++;
			}
			return (needle);
		}
	i++;
	}
	return (NULL);
}
