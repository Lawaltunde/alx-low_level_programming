#include <stdio.h>
#include <stdlib.h>

/**
  * argstostr - function that concatenates all the arguments
  * @ac: int ar
  * @av: pointer to a char pointer
  * Return: pointer to char
  */
char *argstostr(int ac, char **av)
{
	char *ptr;
	int i, j, k = 0, count = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			count++;
		}
		count++;
	}
	count++;
	ptr = malloc(count * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			ptr[k++] = av[i][j];
		}
		ptr[k++] = '\n';
	}
	ptr[k] = '\0';
	return (ptr);
}
