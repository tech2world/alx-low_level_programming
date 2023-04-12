#include "hash_tables.h"

/**
 * hash_table_create - A function that creates a hash table
 * @size: The size of the array
 * 
 * Return: if an Error occcurs - NULL
 * Otherwsie - a pointer to the new hash table
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table_c;
	unsigned long int i;
/* allocating memory for the hash table*/
	hash_table_c = malloc(sizeof(hash_table_t));
	if (hash_table_c == NULL)
		return (NULL);
	hash_table_c->size = size;
	hash_table_c->array = malloc(size * sizeof(hash_node_t *));

	if (hash_table_c->array == NULL)
	{
		free(hash_table_c);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		hash_table_c->array[i] = NULL;
	}
	return (hash_table_c);
}
