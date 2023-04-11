#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings.
 * @s1: first input string.
 * @s2: second input string.
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *dup;
	unsigned int i, j, k, end;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	dup = malloc(sizeof(char) * (i + j + 1));

	if (dup == NULL)
	{
		free(dup);
		return (NULL);
	}

	for (k = 0; k < i; k++)
		dup[k] = s1[k];

	end = j;
	for (j = 0; j <= end; k++, j++)
		dup[k] = s2[j];

	return (dup);
}
