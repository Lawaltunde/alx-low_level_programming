#include "main.h"
#include <stdio.h>

/**
 * main - function that prints all arguments it receives.
 * @argc: arguments count.
 * @argv: array that contains the program command line arguments.
 * Return: zero.
 */

int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
