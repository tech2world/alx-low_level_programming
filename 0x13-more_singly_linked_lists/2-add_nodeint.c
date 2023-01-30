#include "lists.h"

/**
  * add_nodeint - adds a new node at the beginning of listint_t list.
  * @head: double pointer to the beginning of listint_t list
  * @n: int to add to the list
  *
  * Return: address of new node
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
