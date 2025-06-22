#include <stdio.h>
#include "main.h"

/**
 * rev_string - function that reverses a string.
 *
 * @: pointer to character
 *
 * Return: Nothing
 */
void rev_string(char *s)
{
	int start = 0, size = 0;
	char *temp, hold;

	temp = s;
	while (s[size] != '\0')
	{
		size++;
	}
	size -= 1;
	while (start < size)
	{
		hold = s[start];
		s[start] = temp[size];
		temp[size] = hold;
		size--;
		start++;
	}
}
