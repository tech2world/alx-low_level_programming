#include "main.h"

/**
  * print_triangle - prints a triangle folow by a new line
  * @size: size of triangle
  *
  */

void print_triangle(int size)
{
	int count, inner_count, white_space;

	count = 1;

	if (size > 0)
	{
		while (count <= size)
		{
			inner_count = 1;
			white_space = count;

			while (white_space < size)
			{
				_putchar(' ');
				white_space++;
			}

			while (inner_count <= count)
			{
				_putchar(35);
				inner_count++;
			}

			_putchar('\n');
			count++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
