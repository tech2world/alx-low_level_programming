#include "main.h"

/**
  * _puts_recursion - print a string follow by a new line
  * @s: string
  */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
}
