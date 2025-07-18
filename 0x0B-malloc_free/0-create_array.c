#include <stdio.h>
#include <stdlib.h>

/**
  * create_array - function that creates an array of chars, and initializes it
  * @size: usigned int param
  * @c: char type param
  * Return: Pointer to the array
  * or NULL value if it fails
  */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = (char *)malloc(size * sizeof(char));
	if (ptr != NULL)
	{
		while (i < size)
		{
			ptr[i] = c;
			i++;
		}
		ptr[i] = '\0';
		return (ptr);
	}
	else
	{
		return (NULL);
	}
}

