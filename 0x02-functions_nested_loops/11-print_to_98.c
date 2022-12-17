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
	if (n < 98)
	{
		for (n = n; n < 98; n++)
		{
			printf("%d, ", n);
		printf("%d\n", 98);
		}
	}
	else
	{
		for (n = n; n > 98; n--)
		{
			printf("%d, ", n);
		printf("%d\n", 98);
		}
	}
}
