#include <stdio.h>
#include "main.h"

/**
 * _strcpy - function that copies the string pointed to by src
 *
i * @src: pointer to character
 * @dest: pointer to character
 *
 * Return: Nothing
 */
char *_strcpy(char *dest, char *src)
{
	char *temp;
	int count = 0;

	temp = src;
	while (*temp != '\0')
	{
		*dest = *temp;
		dest++;
		temp++;
		count++;
	}
	*dest = *temp;
	dest -= count;
	temp -= count;
	return (temp);
}
