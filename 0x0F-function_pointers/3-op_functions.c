#include "3-calc.h"

/**
  * op_add - calc sum of two integers.
  * @a: first integer
  * @b: second integer
  *
  * Return: sum of a and b
  */

int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - calc the difference of two integers.
  * @a: first int
  * @b: second int
  *
  * Return: difference of a and b.
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - calc the product of two ints.
  * @a: int 1
  * @b: int 2
  *
  * Return: product of a and b.
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - calc the division of two numbers.
  * @a: int 1
  * @b: int 2.
  *
  * Return: division of a and b.
  */
int op_div(int a, int b)
{
	return (a / b);
}

/**
  * op_mod - calc the remainder of two ints.
  * @a: int 1
  * @b: int 2
  *
  * Return: remainder of the division pf a and b.
  */
int op_mod(int a, int b)
{
	return (a % b);
}
