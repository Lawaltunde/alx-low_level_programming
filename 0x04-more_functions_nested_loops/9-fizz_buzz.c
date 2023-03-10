#include <stdio.h>

/**
 * main - program that prints the numbers from 1 to 100
 * for multiples of three print Fizz instead of the number
 * for the multiples of five print Buzz
 * For numbers which are multiples
 * of both three and five print FizzBuzz.
 * Return: value 0 (Success)
 */
int main(void)
{
	int num;

	num = 1;
	printf("%d", num);

	for (num = 2; num <= 100; num++)
	{
		if ((num % 3 == 0) && (num % 5 == 0))
		{
			printf(" FizzBuzz");
		}
		else
		if (num % 3 == 0)
		{
			printf(" Fizz");
		}
		else
		if (num % 5 == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf(" %d", num);
		}

	}
	printf("\n");
	return (0);
}
