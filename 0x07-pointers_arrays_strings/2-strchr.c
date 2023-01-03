#include "main.h"

/**
  * _strchr - finds char in a string.
  * @s: char array string.
  * @c: char to find.
  *
  * Return: Null if no char is found or pointer to the first occurence of c.
  */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		else if (*(s + 1) == c)
		{
			return (s + 1);
		}
		s++;
	}

	return (s + 1);
}
