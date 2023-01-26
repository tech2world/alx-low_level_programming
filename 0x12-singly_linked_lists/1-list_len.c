#include "lists.h"

/**
  * list_len -return the number of element in a linked list_t list.
  * @h: namd of list
  *
  * Return: number of list.
  */
size_t list_len(const list_t *h)
{
	int i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
