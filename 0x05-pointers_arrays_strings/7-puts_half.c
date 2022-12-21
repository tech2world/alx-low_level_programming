include "main.h"

/**
  * puts_half - prints half of a string
  * @str: string to be printed
  *
  */
void puts_half(char *str)
{
	int index = 0;

	len = 0;
	n;

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

	for (i++; n < index; i++)
		_putchar(str[n]);

	_putchar('\n');
}
