#include <stdio.h>
/**
 * main - Starting point
 *
 * Return: Value 0 (Correct)
 */
int main(void)
{	printf("Size of a char is: %ld byte(s)\n", sizeof(char));
	printf("Size of a int is: %ld byte(s)\n", sizeof(int));
	printf("Size of a long int is: %ld byte(s)\n", sizeof(long int));
	printf("Size of a long long int  is: %ld byte(s)\n", sizeof(long long int));
	printf("Size of a char float is: %ld byte(s)\n", sizeof(float));
	return (0);
}
