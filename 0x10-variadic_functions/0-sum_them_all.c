#include <stdarg.h>
#include "variadic_functions.h"

/**
  * sum_them_all - sum of of its parameters.
  * @n: number od params.
  *
  * Return: sum of all parameter.
  */

int sum_them_all(const unsigned int n, ...)
{
	/* create a variable arg list */
	va_list list;
	unsigned int i;
	int sum;

	if (n == 0)
	{
		return (0);
	}
	sum = 0;

	/* init va_list for the number of arguments */
	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(list, int);
	}
	va_end(list);
	return (sum);
}
