#include "main.h"

/**
  * _strlen - returns the length of a string
  * @s: pointer
  *
  * Return: 0
  */
int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
		;

	return (len);
}
