#include "main.h"

/**
  * _strncpy - copies a string
  * @dest: first character
  * @str: second character
  * @n: value
  * Return: dest
  */
char *_strncpy(char *dest, char *str, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
