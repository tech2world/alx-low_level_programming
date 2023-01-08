#include "main.h"

/**
  * _sqrt_recursion - return the natural sqrt of a number.
  * @n: number
  *
  * Return: if no natural sqrt, return -1.
  */
int _sqrt_recursion(int n)
{
	int sqrt_func(int n, int sq);

	int sq = 1;

	return (sqrt_func(n, sq));
}

/**
  * sqrt_func - helps with sqrt recursion.
  * @sq: number to dwtermine if square root.
  * @n: number.
  *
  * Return: sqrt else -1 if no sqrt
  */

int sqrt_func(int n, int sq)
{
	if (n == sq * sq)
	{
		return (sq);
	}
	else if (sq < n)
	{
		return (sqrt_func(n, ++sq));
	}
	else
	{
		return (-1);
	}
}
