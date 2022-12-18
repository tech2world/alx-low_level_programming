#include "main.h"

/**
  * _isupper - checks if the input is in uppercase
  * @c: input param
  * Return: 0 always
  */

int _isupper(int c)
{
	if (c >= 65 && c > 91)
		return (1);
	else
		return (0);
}
