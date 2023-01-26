#include "lists.h"

/**
  * print_list - print all the element of list_t list
  * @h: singly linked list
  *
  * Return: number of element in the list.
  */
size_t print_list(const list_t *h)
{
	size_t n_len;

	n_len = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
			printf("[%d] %s\n", str->len, h->str);
		h = h->next;
		n_len++;
	}
	return (n_len);
}
