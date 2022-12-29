#include "main.h"

/**
  * _isupper - checks if the input is in uppercase
  * @c: input param
  * Return: 1 if upper else 0
  */

int _isupper(int c)
{
	if (c >= 65 && c < 91)
	{
		return (1);
	}
	else
		return (0);
}
