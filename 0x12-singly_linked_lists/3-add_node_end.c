#include "lists.h"

/**
  * _strlen - finds len of string
  * @str: string
  *
  * Return: length of string
  */
int _strlen(char *str)
{
	unsigned int i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}

/**
  * add_node_end - add a new node to end of linked list
  * @head: double pointerto a linked list
  * @str: str to be added to linked list
  *
  * Return: pointer to new node
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;

	if (str == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = _strlen(new->str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	temp = *head;
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = new;
	return (new);
}
