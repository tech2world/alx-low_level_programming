#include "main.h"
#include <stdlib.h>

/**
  * create_array - creates an array of char.
  * @size: size of the array to be initiallizefd.
  *
  * Return: pointrr to array.
  * Null if size equal to zero.
  */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int x;

	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
	{
		arr[x] = c;
	}
	return (arr);
}
