#include "main.h"

/**
  * print_alphabet_x10 - print alphabets ten times
  *
  * Return: 0
  */

void print_alphabet_x10(void)
{
	char letters;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (letters = 'a'; letters <= 'z'; letters++)
		{
			_putchar(letters);
		}

		_putchar('\n');
	}

}
