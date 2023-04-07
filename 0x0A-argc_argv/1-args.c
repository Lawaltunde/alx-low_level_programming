#include "main.h"
#include <stdio.h>
/**
 * main - program that prints the number of arguments passed in.
 * @argc: arguments count.
 * @argv: array that contains the program command line arguments.
 * Return: value zero.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", (argc - 1));
	return (0);
}
