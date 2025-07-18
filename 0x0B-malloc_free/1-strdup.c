#include <stdio.h>
#include <stdlib.h>

/**
  * _strdup - function that returns a pointer to a
  * newly allocated space in memory
  * @str: pointer to char
  * Return: pointer to char
  */
char *_strdup(char *str)
{
	char *ptr;
	int size = 0, i = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[size] != '\0')
	{
		size++;
	}
	ptr = (char *)malloc(size * sizeof(char));
	if (ptr != NULL)
	{
		while (size)
		{
			ptr[i] = str[i];
			i++;
			size--;
		}
		ptr[i] = '\0';
		return (ptr);
	}
	else
	{
		return (NULL);
	}
}
