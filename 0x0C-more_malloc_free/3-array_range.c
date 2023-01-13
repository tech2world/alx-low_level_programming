#include "main.h"
#include <stdlib.h>

/**
  * array_range - creates n array of integers.
  * @min: mini value.
  * @max: maxi value
  *
  * Return: pointer to newly created array.
  * NULL if malloc fails
  * NULL if min > max.
  */
int *array_range(int min, int max)
{
	int range, i, *p;

	range = 0;

	if (min > max)
	{
		return (NULL);
	}
	range = ((max + 1) - min);
	p = malloc(range * sizeof(int));

	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < range; i++)
	{
		*(p + i) = min + i;
	}
	return (p);
}
