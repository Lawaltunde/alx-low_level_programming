#include "main.h"
/**
 * _isalpha - checks  1 if letter is lower or uppercase
 *
 * @c: The character in ASCII standard
 *
 * Return: Returns 1 if c is a letter, lowercase or uppercase
 * otherwise return 0
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
