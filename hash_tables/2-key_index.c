#include "hash_tables.h"

/**
 * key_index - Function that gives us the index of a key
 * @key : key associated to the value
 * @size : size of the array of the hash table
 *
 * Return: the index at which the key/value pair should be stored
 * in the array of the hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_module = 0;

	hash_module = (hash_djb2(key)) % size; /* wrap around the table ;) */

	return (hash_module);
}
