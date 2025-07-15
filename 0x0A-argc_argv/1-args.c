#include <stdio.h>

/**
  * main - main function
  * @argc: argument count, int type
  * @argv: pointer array
  * Return: value int
  */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
