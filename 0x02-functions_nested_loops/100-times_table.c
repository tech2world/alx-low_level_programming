#include "main.h"
#include <stdio.h>

/**
  * print_times_table - prints times table
  * @n: inout value
  * Return: 0
  */
void print_times_table(int n)
{
	int row, col, prod;

	if (n >= 0 &&  n <= 15)
	{

		for (row = 0; row <= n; row ++)
		{
			_putchar('0');
			
			for (col = 1; col <= n; col++)
			{
				_putchar(',');
				_putchar(' ');

				prod = row * col;
				
				if (prod <= 99)
					_putchar(' ');
				if (prod <= 9)
					_putchar(' ');
				if (prod >= 100)
				{
					_putchar((prod / 100) + '0');
					_putchar(((prod / 10) % 10) + '0');
				}
				else if (prod <= 99 && prod >= 10)
				{
					_putchar((prod / 10) + '0');
				}
				_putchar((prod % 10) + '0');
			}
			_putchar('\n');
		}
	}
}

					
