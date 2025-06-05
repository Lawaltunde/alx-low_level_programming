#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char value[] = "_putchar";
	int i = 0;

	while (value[i] != '\0')
	{
		_putchar(value[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
