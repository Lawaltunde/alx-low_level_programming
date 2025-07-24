#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * is_digit - checks if a string contains only digits
 * @s: the string to check
 * Return: 1 if all digits, 0 otherwise
 */
int is_digit(char *s)
{
	while (*s)
	{
		if (!isdigit(*s))
			return (0);
		s++;
	}
	return (1);
}

/**
 * _calloc - allocates memory and sets it to zero
 * @nmemb: number of elements
 * @size: size of each element
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		ptr[i] = 0;

	return (ptr);
}

/**
 * multiply - multiplies two digit-only strings
 * @num1: first number string
 * @num2: second number string
 */
void multiply(char *num1, char *num2)
{
	int len1 = strlen(num1), len2 = strlen(num2);
	int *result = _calloc(len1 + len2, sizeof(int));
	int i, j;

	if (!result)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
		{
			int mul = (num1[i] - '0') * (num2[j] - '0');
			int pos1 = i + j;
			int pos2 = i + j + 1;
			int sum = mul + result[pos2];

			result[pos2] = sum % 10;
			result[pos1] += sum / 10;
		}
	}

	i = 0;
	while (i < len1 + len2 && result[i] == 0)
		i++;

	if (i == len1 + len2)
		printf("0");
	else
		for (; i < len1 + len2; i++)
			printf("%d", result[i]);
	printf("\n");

	free(result);
}

/**
 * main - Entry point. Multiplies two positive numbers.
 * @argc: number of arguments
 * @argv: argument vector
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
	if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}

	multiply(argv[1], argv[2]);
	return (0);
}

