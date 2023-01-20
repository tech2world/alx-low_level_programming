#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
  * print_numbers - a function that prints numbers.
  * @n: no of args
  * @separator: separation btw the nos.
  *
  * Return: 0 always
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	/* create va_list to store va_arg */
	va_list list;
	unsigned int i;

	/* init va_list */
	va_start(list, n);

	/* looping thru the list */
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, unsigned int));

		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(list);
	printf("\n");
}
