#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
  * print_all - prints anything.
  * @format: a list of types of arguments passed to the function.
  * c: char
  * i: integer
  * f: float
  * s: char *
  * any other char should be ignored
  *
  * Return: if the string is NULL, print (nil) instead.
  * void.
  */
void print_all(const char * const format, ...)
{
	/* create a variable list */
	va_list args;
	char *s, *separator;
	unsigned int i;

	/* init the va_list */
	va_start(args, format);

	separator = " ";
	i = 0;

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char *);

				if (s == NULL)
					s = "(nil)";
				printf("%s%s", separator, s);
				break;
			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
	}
	printf("\n");
	va_end(args);
}
