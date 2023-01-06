#include "main.h"
#include <stdio.h>
/**
  * print_diagsums - prints sum of a diagonal in a square matrix.
  * @a: array
  * as: size of the array
  */
void print_diagsums(int *a, int size)
{
	int i, n1, n2, sum_1, sum_2;

	int row_size = size;

	i = 0, n1 = 0, sum_1 = 0; /* main diagonal */

	while (n1 < size - 1)
	{
		n1 = i * (row_size + 1);
		sum_1 += a[n1];
		i++;
	}
	n2 = 0, sum_2 = 0, i = 1; /* auxilairy diagonal */

	while (size - n2 != row_size)
	{
		n2 = i * (row_size - 1);
		sum_2 += a[n2];
		i++;
	}
	printf("%d, %d\n", sum_1, sum_2);
}
