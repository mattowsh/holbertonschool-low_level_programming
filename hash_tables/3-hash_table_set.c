#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table
 * @ht : the hash table you want to add or update the key/value to
 * @key : the key, can not be an empty string
 * @value : the value associated with the key, can be an empty string
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int array_length = 0;
	unsigned long int keyindex = 0;
	hash_node_t *nodetocheck = NULL, *newnode = NULL;

	if (!ht)
		return (0);

	array_length = ht->size;
	keyindex = key_index((const unsigned char *)key, array_length);

	nodetocheck = ht->array[keyindex];

	/* check if in ht->array[keyindex] MY key already exists */
	while (nodetocheck)
	{
		if (strcmp(nodetocheck->key, key) == 0)
		{
			free(nodetocheck->value);
			nodetocheck->value = strdup(value);
			return (1);
		}
		nodetocheck = nodetocheck->next;
	}

	/* if any key == MY key */
	newnode = malloc(sizeof(hash_node_t));
	if (!newnode)
		return (0);

	newnode->key = strdup(key); /* malloc was considered in strdup */
	newnode->value = strdup(value);
	newnode->next = ht->array[keyindex];
	ht->array[keyindex] = newnode;

	return (1);
}
