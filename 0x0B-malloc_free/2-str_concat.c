#include <stdio.h>
#include <stdlib.h>

/**
  * str_concat - function that concatenates two strings
  * @s1: pointer to string
  * @s2: pointer to string
  * Return: pointer to string
  */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i = 0, count = 0, j = 0;

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
	i = 0;
	while (s2[i] != '\0')
	{
		count++;
		i++;
	}
	ptr = malloc((count + 1) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		ptr[i] = s2[j];
		j++;
		i++;
	}
	return (ptr);
}
