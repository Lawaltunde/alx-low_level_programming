#include "main.h"
#include <stdlib.h>
/**
 * _strdup - a function that returns a pointe
 * to a newly allocated space in memory.
 * @str: input string and also string to be returned.
 * Return: a pointer to a new string which.
 * is a duplicate of the string str.
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int len, count = 0, i = 0, j;

	while (str[i] != '\0')
	{
		count++;
	i++;
	}
	len = count;

	if (str == NULL)
		return (NULL);

	dup = (char *)malloc((len + 1) * sizeof(char));

	if (dup == NULL)
		return (NULL);

	for (j = 0; j <= len; j++)
		dup[j] = str[j];

	return (dup);
}
