#include <stdio.h>
#include <stdlib.h>

/**
  * _realloc - function that reallocates a memory block using malloc
  * @ptr: pointer to void
  * @old_size: unsigned int type
  * @new_size: unsigned int type
  *
  * Return: Nothing
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1, *ptr2;
	unsigned int i = 0;

	if (old_size == new_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr1 = malloc(new_size);
	if (ptr1 == NULL)
	{
		return (NULL);
	}
	if (ptr != NULL)
	{
		ptr2 = (char *)ptr;
		while (i < (old_size < new_size ? old_size : new_size))
		{
			ptr1[i] = ptr2[i];
			i++;
		}
		free(ptr);
	}
	return ((void *)ptr1);
}
