#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted arrayay of
 * integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located or -1 otherwise
*/
int binary_search(int *array, size_t size, int value)
{
	int low = 0, high, mid, i;
	high = size - 1;

    if (array == NULL)
        return (-1);

	while (low <= high)
	{
		printf("Searching in array: ");

		for (i = low; i <= high; i++)
			i < high ? printf("%d, ", array[i]) : printf("%d\n", array[i]);

		mid = (low + high) / 2;

		if (array[mid] == value)
			return (mid);

		else if (value < array[mid])
			high = mid - 1;

		else
			low = mid + 1;
	}
	return (-1);
}
