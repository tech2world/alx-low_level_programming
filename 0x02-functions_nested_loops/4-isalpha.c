#include "main.h"
/**
  * _isalpha - checks if input is an alphabet either in lower or uppercase
  *@c: ASCII character
  *
  *Return: 1 for alphabets otherwise 0
  */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) ||
		(c >= 65 && c <= 90))
	{
		return (1);
	}
	else
		return (0);
	_putchar('\n');
}
