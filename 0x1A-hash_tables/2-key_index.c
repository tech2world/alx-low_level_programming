#include "hash_tables.h"

/**
 * key_index - Get the index of a key
 * @key: Key to get index for
 * @size: size of the array of the hash table
 * 
 * Return: Index for the key
 * Description: uses the djb2 Algorithm
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    return (hash_djb2(key) % size);
}
