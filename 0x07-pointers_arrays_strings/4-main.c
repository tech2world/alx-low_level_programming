#include "main.h"
#include <stdio.h>

/**
  * main - check the code
  *
  * Return: 0 always
  */
int main(void)
{
	char *s = "hello, world";
	char *f = "world";
	char *t;

	t = _strpbrk(s, f);
	printf("%s\n", t);
	return (0);
}
