#include <stdio.h>
#include "main.h"
#include <stdbool.h>
/**
  * _islower - function that checks for lowercase character
  * @c: argument
  * Return: 1 if c is lower, 0 otherwise
  */
int _islower(int c)
{
	int i = 0;
	bool flag = false;

	for (i = 97; i < 123; i++)
	{
		if (c == i)
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

