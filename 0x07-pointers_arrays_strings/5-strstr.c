#include "main.h"
#include <stdlib.h>

/**
  * _strstr - locate a substring
  * @haystack: string
  * @needle: substring
  *
  * Return: pointer to beginning of substring. NULL if not found.
  */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, c = 0, j;

	while (haystack[i] != '\0')
	{
		j = 0;

		while (needle[j + c] != '\0' && haystack[i + c] != '\0')
		{
			if (haystack[i + c] != needle[j + c])
				break;
			c++;
		}
		if (needle[j  + c] == '\0')
			return (&haystack[i]);
		j++;
		i++;
	}
	return (NULL);
}
