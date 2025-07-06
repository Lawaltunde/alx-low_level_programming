#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
  * _memset - unction that fills memory with a constant byte
  * @char: pointer to string
  * @b: argument char
  * @n: unsigned int argument
  * Return : pointer to the memory area s
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

