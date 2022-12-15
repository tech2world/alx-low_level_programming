#include "main.h"
/**
  * print_sign - checks if a number is + || -
  * Description: prints 1 if the num is greater than zero,
  * prints zero if the number is zero otherwise  prints -1
  * @n: natural number
  *
  * Return: 1 0 or -1
  */
int print_sign(int n)
{
	int test;

	if (n > 0)
	{
		test = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		test = 0;
		_putchar('0');
	}
	else
	{
		test = -1;
		_putchar('-');
	}
	return (test);
	_putchar('\n');
}
