#include "main.h"

/**
  * puts_half - prints half of a string
  * @str: string to be printed
  *
  */
void puts_half(char *str)
{
	int index = 0;
	int len = 0;
	int n;

	while (index >= 0)
	{
		if (str[index] == '\0')
			break;
		index++;
	}

	if (index % 2 == 1)
		n = len / 2;
	else
		n = (index - 1) / 2;

	for (n++; n < index; n++)
		_putchar(str[n]);

	_putchar('\n');
}
