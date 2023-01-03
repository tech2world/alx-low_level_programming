#include "main.h"

/**
  *_memset fills memory with constant byte.
  * @s: buffer array
  * @b: constant byte
  * @n: no of byte of memory area to fill.
  *
  * Description - fill the first n byte of the memory area pointed by s
  * Return: pointer to memory area s
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
