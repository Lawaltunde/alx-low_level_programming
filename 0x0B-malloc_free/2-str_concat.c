#include "main.h"
#include <stdlib.h>

/**
 * str_concat -a function that concatenates two strings.
 * @s1: dest string.
 * @s2: source string.
 * Return: pointer should point to a newly allocated
 * space in memory.
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, m, len1, len2, j = 0, k = 0, count1 = 0, count2 = 0;
	char *conc;

	if (s1 == NULL)
		return (s1 = "");

	if (s2 == NULL)
		return (s2 = "");

	while (s1[j] != '\0')
	{
		count1++;
		j++;
	}
	len1 = count1;

	while (s2[k] != '\0')
	{
		count2++;
		k++;
	}
	len2 = count2;

	conc = malloc((len1 + len2 + 1) * sizeof(char));

	if (conc == NULL)
	{
		free(conc);
		return (NULL);
	}

	for (i = 0; i <= len1; i++)
		conc[i] = s1[i];


	for (m = 0; m <= (len1 + len2 + 1); m++)
		conc[len1 + m] = s2[m];

	return (conc);
}
