#include <stdio.h>
#include "main.h"
/**
  * _isupper - function that checks for uppercase character
  * @c : argument
  * Return: Always 0 or 1 (success)
  */
int _isupper(int c)
{
	char start;

	for (start = 'A'; start <= 'Z'; start++)
	{
		if (c == start)
		{
			return (1);
		}
	}
	return (0);
}

