#include <stdio.h>
#include <stdlib.h>

/**
  * main - execution starts here
  * @argc: argument count
  * @argv: pointer to char
  * Return: int value zero (success)
  */
int main(int argc, char *argv[])
{
	int i, numbyte;
	unsigned char *ptr = (unsigned char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	numbyte = atoi(argv[1]);
	if (numbyte < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < numbyte; i++)
	{
		printf("%02x", ptr[i]);
		if (i != (numbyte - 1))
		{
			printf(" ");
		}
	}
	numbyte = atoi(argv[1]);
	printf("\n");
	return (0);
}
