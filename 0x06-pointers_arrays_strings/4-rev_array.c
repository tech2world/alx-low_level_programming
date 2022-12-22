#include "main.h"

/**
  * reverse_array - reveres the content of an array
  * @a: array pointer
  * @n: points to elements of an array
  *
  * Return: 0
  */
void reverse_array(int *a, int n)
{
	int temp;
	int i;

	n = n - 1;
	i = 0;
	while (i <= n)
	{
		temp = a[i];
		a[i++] = a[n];
		a[n--] = temp;
	}
}
