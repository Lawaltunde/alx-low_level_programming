#include <stdio.h>
#include "main.h"
/**
  * print_to_98 - function that prints all natural numbers
  *@n: argument
  */
void print_to_98(int n)
{
	int i = 0;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	else
	{

		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
