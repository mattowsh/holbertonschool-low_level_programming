#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key
 * @ht : the hash table you want to look into
 * @key : the key you are looking for
 *
 * Return: the value associated with the element, or NULL if
 * key couldn’t be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int i = 0, array_length = 0;
	hash_node_t *nodetocheck =  NULL;

	if (!ht)
		return (NULL);

	array_length = ht->size;

	for (; i < array_length; i++)
	{
		nodetocheck = ht->array[i];
		while (nodetocheck)
		{
			if (strcmp(nodetocheck->key, key) == 0)
				return (nodetocheck->value);
			nodetocheck = nodetocheck->next; /*bc array[i]=lilist*/
		}
	}

	return (NULL);
}
