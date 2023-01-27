#include "lists.h"

/**
  * add_node - adds node ro beginning of alinked list
  * @head: double pointerto a linked list
  * @str: string to afd to new node
  *
  * Return: pointer to new node
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t n;

	if (str == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	
	new->str = strdup(str);
	
	for (n = 0; str[n]; n++)
		;
	new->len = n;
	new->next = *head;
	*head = new;
	return (new);
}
