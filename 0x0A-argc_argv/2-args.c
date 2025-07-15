#include <stdio.h>

/**
  * main - main function
  * @argc: argument count, int type
  * @argv: pointer array
  * Return: value int
  */
int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
