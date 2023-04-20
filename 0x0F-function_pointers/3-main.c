#include "3-calc.h"

/**
 * main - code staring pint.
 * @argc: argument count.
 * @argv: argument string.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, j;
	int (*symbol)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}

	symbol = get_op_func(argv[2]);

	if (symbol == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	i = atoi(argv[1]);
	j = atoi(argv[3]);

	printf("%d\n", symbol(i, j));
	return (0);
}
