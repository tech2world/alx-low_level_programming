#include "main.h"

/**
  * _memcpy - copy memory area
  * @dest: array to copy into
  * @src: array to copy from
  * @n: no of characters to copy
  *
  * Description - copies memory area from scr to dest.
  * Return: pointer to dest.
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < 0)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
