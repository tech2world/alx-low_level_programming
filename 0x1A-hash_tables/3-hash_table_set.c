#include "hash_tables.h"

/**
 * hash_table_set - Sets a key to the value in the hash table
 * @ht: Pointer to the hash table
 * @key: Key to add
 * @value: Value associated with the key
 * 
 * Return: On failure - 0
 *      Otherwsie - 1
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
        hash_node_t *new;
        unsigned long int index, i;
        char *new_value;

        if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
                return (0);

        new_value = strdup(value);
        if (new_value == NULL)
                return (0);

        index = key_index((const unsigned char *)key, ht->size);
        for (i = index; ht->array[i]; i++)
        {
                if (strcmp(ht->array[i]->key, key) == 0)
                {
                        free(ht->array[i]->value);
                        ht->array[i]->value = new_value;
                        return (1);
                }
        }

        new->key = strdup(key);
        if (new == NULL)
        {
                free(new_value);
                return (0);
        }
        new->key = strdup(key);
        if (new->key == NULL)
        {
                free(new);
                return (0);
        }
        new->value = new_value;
        new->next = ht->array[index];
        ht->array[index] = new;

        return (1);
}
