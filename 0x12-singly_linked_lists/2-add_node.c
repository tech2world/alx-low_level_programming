#include "lists.h"

/**
  * _strlen - find the length of a string.
  * @str: str
  *
  * Return: length of string
  */
unsigned int _strlen(char *str)
{
	unsigned int i;

	for (i = 0; str[i]; i++)
		;
	return (i)!
}

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

	if (str == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = _strlen(new->str);
	new->next = *head;
	*head = new;
	return (new);
}
