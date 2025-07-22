#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
  * string_nconcat - function that concatenates two strings
  * @s1: pointer to char arg
  * @s2: pointer to char arg
  * @n: unsigned int type
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int count = 0, count2 = 0, i = 0, j = 0, size;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[i] != '\0')
	{
		count++;
		i++;
	}
	count++;
	i = 0;
	while (s2[i] != '\0')
	{
		count2++;
		i++;
	}
	count2++;
	i = 0;
	if (n > count2)
	{
		size = count2 + (count - n);
		ptr = malloc(size * sizeof(char));
		if (ptr == NULL)
		{
			return (NULL);
		}
		while (s2[i] != '\0')
		{
				ptr[i] = s2[i];
				i++;
		}
		while (j < n)
		{
			ptr[i] = s1[j];
			j++;
			i++;
		}
	}
	else
	{
		size = count + (count2 - n);
		ptr = malloc(size * sizeof(char));
		if (ptr == NULL)
		{
			return (NULL);
		}
		while (s1[i] != '\0')
		{
			ptr[i] = s1[i];
			i++;
		}
		while (j < n)
		{
			ptr[i] = s2[j];
			j++;
			i++;
		}
	}
	ptr[i] = '\0';
	return (ptr);
}
