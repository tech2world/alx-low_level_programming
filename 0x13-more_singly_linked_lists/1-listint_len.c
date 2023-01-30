#include "lists.h"

/**
  * listint_len - returns the num of elements in a linked listint_t list
  * @n: pointer to the linked list
  *
  * Return: num of element in the linked listint_t list
  */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (count != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
