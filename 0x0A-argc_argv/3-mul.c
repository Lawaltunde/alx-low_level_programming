#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - function that multiplies two numbers.
 * @argc: arguments count.
 * @argv: array that contains the program command line arguments.
 * Return: zero.
 */
int main(int argc, char *argv[])
{
	int mul;

	mul = atoi(argv[1]) * atoi(argv[2]);
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
		printf("%d\n", mul);
	return (0);
}
