#include "main.h"

/**
  * _pow_recursion - return the value of 'x' raised to 'y'.
  * @x: number
  * @y: power
  *
  * Return: x raised to y.
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);

	return (x * _pow_recursion(x, y - 1));
}
