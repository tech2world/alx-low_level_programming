#include "main.h"
#include <stdio.h>

/**
  * print_array - prints an array of int
  * @a: pointer
  * @n: integer value
  *
  */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
