#include "main.h"

/**
  * _islower - checks id the character is in lowercase
  * @c: ASCII character
  *
  * Return: 1 if true othwrwise 0
  */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
	_putchar('\n');
}
