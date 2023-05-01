#include <stdio.h>

/**
 * pmain - function executed before main
 * Return: no return.
 */

void __attribute__ ((constructor)) pmain()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
