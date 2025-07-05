#include <stdio.h>
#include "main.h"

/**
  * leet - function that encodes a string into 1337
  * @src: pointer to char parameter
  * Return: pointer to character
  */
char *leet(char *src)
{
	char alpha[5] = {'A', 'E', 'O', 'T', 'L'}, holder1;
	char nums[5] = {'4', '3', '0', '7', '1'};
	int i, j = 0, holder;

	while (src[j] != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			holder = alpha[i] + 32;
			holder1 = holder;
			if (src[j] == alpha[i] || src[j] == holder1)
			{
				src[j] = nums[i];
			}
		}
		j++;
	}
	return (src);
}
