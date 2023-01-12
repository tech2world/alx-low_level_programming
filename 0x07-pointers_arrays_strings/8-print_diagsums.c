#include "main.h"
#include <stdio.h>
/**
  * print_diagsums - prints sum of a diagonal in a square matrix.
  * @a: array
  * as: size of the array
  */
void print_diagsums(int *a, int size)
{
	int b, sum_1 = 0, sum_2 = 0;

	for (b = 0; b < size; b++)
	{
		sum_1 += a[(size + 1) * b];
		sum_2 = a[(size - 1) * (b + 1)];
	}
	printf("%d, %d\n", sum_1, sum_2);
}
