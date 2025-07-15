#include <stdio.h>
#include "main.h"

/**
 * _atoi - function that convert a string to an integer.
 *
 * @src: pointer to character
 *
 * Return: value int (successful)
 */
int _atoi(char *s)
{
	int temp1 = 0, sign = 1;
	char *temp;

	temp = s;
	if (*temp == '\0')
	{
		return (0);
	}
	else
	{
		while (*temp != '\0')
		{
			
			if(*temp == '-')
			{
				sign *= -1;
				temp++;
			}
			else if(*temp >= '0' && *temp <= '9')
			{
				if (*temp != '\0')
				{
					temp1 = (temp1 * 10) + (*temp - '0');
				}
				temp++;
			}
			else
			{
				temp++;
			}
		}
		return (temp1 * sign);
	}
}
