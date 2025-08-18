#include "main.h"

/**
  * get_bit - function that returns the value of a bit
  * at a given index
  * @n: value to check
  * @index:  is the index, starting from 0
  * Return: the value of the bit at
  *  index index or -1 if an error occured
  */
int get_bit(unsigned long int n, unsigned int index)
{
	size_t i = 0, holder = 0;

	if (n == 0 && index == 0)
		return (0);

	while (i <= index)
	{
		holder = n % 2;
		n = n / 2;
		i++;
	}
	return (holder);
}
