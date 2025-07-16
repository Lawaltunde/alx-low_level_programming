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
	int val[] = {25, 10, 5, 2, 1};
	int num, temp = 0, i = 0;

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	num = atoi(argv[1]);
	for (i = 0; i < 5; i++)
	{
		while (num >= val[i])
		{
			num -= val[i];
			temp++;
		}
	}
	printf("%d\n", temp);
	return (0);
}
