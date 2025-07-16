#include <stdio.h>
#include <stdlib.h>

/**
  * main - main function
  * @argc: argument count, int type
  * @argv: pointer array
  * Return: value int
  */
int main(int argc, char *argv[])
{
	int i = 1, sum = 0;

	if (argc < 2)
	{
		printf("%d\n", 0);
		return (0);
	}
	while (argc-- && argc != 0)
	{
		if (atoi(argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("%s\n", "Error");
			return (1);
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
