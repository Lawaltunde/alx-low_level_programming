#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * @n: variable int
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, ans;
	bool checker = false;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		checker = true;
		n *= (-1);
	}
	ans = n % 10;
	if (!checker)
	{
		if (ans >= 6)
		{
			printf("Last digit of %d is %d and is greater than 5\n", n, ans);
		}
		else if (ans < 6 && ans > 0)
		{
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ans);
		}
		else
		{
			printf("Last digit of %d is %d and is 0\n", n, ans);
		}
	}
	else
	{
		n = -(n);
		ans = -(ans);
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ans);
	}
	return (0);
}
