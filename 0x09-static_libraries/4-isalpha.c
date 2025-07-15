#include <stdio.h>
#include "main.h"
#include <stdbool.h>
/**
  * _islower - function that checks for alphabetic character
  * @c: argument
  * Return: 1 if c is letter
  */
int _isalpha(int c)
{
	int i;
	bool flag = false;

	for (i =0; i < 26; i++)
	{
		if (c == (i+97) || c == (i+65))
		{
			flag = true;
		}
	}
	if (flag)
	{
		return (1);
	}
	return (0);
}

