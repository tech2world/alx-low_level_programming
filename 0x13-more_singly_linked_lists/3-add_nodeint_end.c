#include "lists.h"

/**
  * add a new node at the endof listint_t list.
  * @head: double pointer to the beginning of the list
  * @n: int to add to the last list
  *
  * Return: pointer to thr new node.
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	lisint_t *current;
	
	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	current = *head;
	
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = new;
	return (new);
}
