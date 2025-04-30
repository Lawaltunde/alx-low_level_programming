#include <stdio.h>
#include <unistd.h>

/**
  *main - execution starts from here
  *
  *Return: 1 (success)
  */

int main(void)
{
	char *ms = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, ms, 59);
	return (1);
}
