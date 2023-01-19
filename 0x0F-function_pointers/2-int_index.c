#include "function_pointers.h"

/**
  * int_index - search for an integer.
  * @array: array to search in.
  * @size: size of array.
  * @cmp:compare values.
  *
  * Return: int_index otherwise -1 when size <= 0
  * or when no match is found.
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == 0 || size <= 0 || cmp == 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i] != 0))
			return (i);
	}
	return (-1);
}
