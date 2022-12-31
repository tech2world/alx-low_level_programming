#include "main.h"

/**
  * print_square - prints a square follow by a new line
  * @size: square size
  */

void print_square(int size)
{
	int height,width;

	if (size > 0)
	{
		for (height = 0; height < size; height++)
		{
			for (width = 0; width < size; width++)
			{
				_putchar(35);
			_putchar('\n');
			}
		}
	}
	else
		_putchar('\n');
}
