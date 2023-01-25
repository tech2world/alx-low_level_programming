#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
  * print_strings - print strings followed by a new line.
  * @separator: string to be printed btw strings.
  * @n: no of strings passed to the func
  *
  * Return: If separator is NULL, don’t print it
  * If one of the string is NULL, print (nil) instead
  * Print a new line at the end of your function
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	/* creating a va_list */
	va_list strings;
	char *str;
	unsigned int i;

	/* init the va_list */
	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(strings, char *);
		if (str)
		{
			printf("%s", str);
		}
		else
			printf("(nil");

		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
