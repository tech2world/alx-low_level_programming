#include "main.h"

/**
  * largest_number - returns thw largwst of three nos
  * @a: first integer
  * @b: second integer
  * @c: third integer
  * Return: largest number
  */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (b > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
