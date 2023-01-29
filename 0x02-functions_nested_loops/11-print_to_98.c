#include "main.h"
#include <stdio.h>

/**
  * print_to_98 - prints natural no
  * Description: prints all natural number starting from the user input to 98
  * @n: input
  *
  * Return: 0 always
  */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n >= 98)
		{
			printf("%d, ", n);
			if (n != 98)
			{
				printf(", ");
			}
			n--;
		}
	}
	else
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n++;
		}
	}
	printf("\n");
}
