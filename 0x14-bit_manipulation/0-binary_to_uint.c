#include "main.h"

/**
  * binary_to_uint - function that converts a binary number to
  * an unsigned int
  * @b: pointer to char
  * Return: the converted number, or 0 if
  * there is one or more chars in the string
  * b that is not 0 or 1
  * b is NULL
  */
unsigned int binary_to_uint(const char *b)
{
	int i = 0, j, m;
	unsigned int sum = 0, holder = 1;

	if (!b)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}

	i = i - 1;
	for (j = 0; j <= i; j++)
	{
		m = i - j;
		holder = 0;
		holder = (b[j] - '0');
		while (m > 0)
		{
			holder *= 2;
			m--;
		}

		sum += holder;
	}
	return (sum);
}
