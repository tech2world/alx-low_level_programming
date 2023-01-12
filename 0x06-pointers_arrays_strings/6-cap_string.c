#include "main.h"

/**
  * cap_string - capitalize every first word of a letter in a string.
  * word separators are space anx tabulation and a ndw line.
  * @s: pointz to a string
  *
  * Return: to s
  */
char *cap_string(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[0] >= 97 && s[0] <= 122)
		{
			s[0] = s[0] - 1;
		if (s[i] = ' ' || s[i] = '\t' || s[i] = '\n')
