#include "main.h"

/**
  * _strcmp - compares two string
  * @s1: first string
  * @s2: second string
  * Return: value less than 0 if one string is less than the other
  * value greater than 0 if one str ai greater than thw sun
  * returns 0 if strings are equal
  */
int _strcmp(char *s1, char *s2)
{
	int counter;
	int comVal;

	counter = 0;
	while (s1[counter] == s2[counter] && s1[counter] != '\0')
	{
		counter++;
	}
	comVal = s1[counter] - s2[counter];
	return (comVal);
}
