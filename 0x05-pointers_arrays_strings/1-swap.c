#include "main.h"

/**
  * swap_int - wsaps the value of two integers
  * @a: first integer
  * @b: second integer
  *
  * Return: 0 always
  */
void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
