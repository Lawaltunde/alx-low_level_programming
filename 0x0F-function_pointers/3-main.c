#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
#include "string.h"
/**
  * main - execution starts here
  * @argc: command line argument count
  * @v: array of char
  * Return: int value (success)
  */
int main(int argc, char **v)
{
	int calc, num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((strcmp(v[2], "/") == 0 || strcmp(v[2], "%") == 0) && atoi(v[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}
	if (get_op_func(v[2]) != NULL)
	{
		num1 = atoi(v[1]);
		num2 = atoi(v[3]);
		calc = get_op_func(v[2])(num1, num2);
		printf("%d\n", calc);
		return (calc);
	}
	printf("Error\n");
	exit(99);
}
