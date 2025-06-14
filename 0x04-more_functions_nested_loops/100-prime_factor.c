#include <stdio.h>
#include "main.h"
#include <stdbool.h>
/**
  * main - execution  starts here
  */
int main(void)
{
	long int num = 612852475143, keep, holder, i = 2, track_num = 1;
	bool track = true;

	holder = num;
	while (track && i <= num)
	{
		if (i == 0)
		{
			break;
		}
		keep = num % i;
		if (keep == 0)
		{
			num /= i;
			track_num *= i;
			if (track_num == holder)
			{
				track = false;
			}
		}
		else
		{
			i++;
		}
	}
	printf("%lu\n", i);
	return (0);
}
