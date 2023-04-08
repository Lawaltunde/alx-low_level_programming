#include "main.h"
#include <stdio.h>

/**
 * main - starting of program that prints its name.
 * followed by a new line
 * @argc: number count of command line arguments.
 * @argv: array of the supplied arguments.
 * Return: zero (successful).
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}

