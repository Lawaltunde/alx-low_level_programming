#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
  * op_add - function that performs addition
  * @a: int type
  * @b: int type
  * Return: int type value
  */
int op_add(int a, int b)
{
	return (a + b);
}
/**
  * op_sub - function that performs subtraction
  * @a: int type
  * @b: int type
  * Return: int type value
  */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
  * op_mul - function that performs multiplication
  * @a: int type
  * @b: int type
  * Return: int type value
  */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
  * op_div - function that performs division
  * @a: int type
  * @b: int type
  * Return: int type value
  */
int op_div(int a, int b)
{
	return (a / b);
}
/**
  * op_mod - function that returns remainder
  * @a: int type
  * @b: int type
  * Return: int type value
  */
int op_mod(int a, int b)
{
	return (a % b);
}
