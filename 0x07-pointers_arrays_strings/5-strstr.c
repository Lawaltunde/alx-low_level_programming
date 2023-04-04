#include "main.h"

/**
 * _strstr - a function that locates a substring.
 * @haystack: Major string.
 * @needle: substring to be compared.
 * Return: pointer to the beginning of located
 * substring or NULL.
 */

char *_strstr(char *haystack, char *needle)
{
	char *second_haystack;
	char *second_needle;

	while (*haystack != '\0')
	{
		second_haystack = haystack;
		second_needle = needle;
	while (*haystack != '\0' && *second_needle != '\0' && *haystack == *second_needle)
	{
		haystack++;
		second_needle++;
	}
	if (!*second_needle)
		return (second_haystack);
	haystack = second_haystack + 1;
	}
	return (0);
}
