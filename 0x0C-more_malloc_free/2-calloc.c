#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * _calloc - function that allocates memory for an array
  * @nmemb: unsigned int arg
  * @size: unsigned int type arg
  * Return: Nothing
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (i < (nmemb * size))
	{
		ptr[i] = 0;
		i++;
	}
	return ((void *)ptr);
}
