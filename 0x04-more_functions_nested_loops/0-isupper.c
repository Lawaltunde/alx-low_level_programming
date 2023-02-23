#include "main.h"

/**
 * _isupper - function that determines upper and lowercase letter.
 *
 * @c:is the input of the function with integer datatype.
 *
 * Return: value of 1 if input is is uppercase and value of 0 otherwise.
 */
int _isupper(int c)
{

	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}
