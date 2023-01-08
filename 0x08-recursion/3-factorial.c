#include "main.h"

/**
  * factorial - print factorial of a given number.
  * @n: input number.
  * * Return: factorial.
  */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n < 2)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
