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
	int num, num1;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	num1 = atoi(argv[2]);
	printf("%d\n", num1 * num);
	return (0);
}
