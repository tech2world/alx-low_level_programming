#include "main.h"
#include <stdio.h>

/**
  * _strcpy - copy strings pointed to dest and src
  * @dest: pointer
  * @str: pointer
  * Return: char
  */
char *_strcpy(char *dest, char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		dest[i] = *(str + i);
	}
	dest[i] = '\0';

	return (dest);
}
