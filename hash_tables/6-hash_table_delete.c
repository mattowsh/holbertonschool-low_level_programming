#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table
 * @ht : the hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	int i = 0, array_length = 0;
	hash_node_t *currentnode, *aux;

	if (!ht)
		return;

	array_length = ht->size;

	for (; i < array_length; i++)
	{
		currentnode = ht->array[i];
		while (currentnode)
		{
			aux = currentnode;
			free(aux->key);
			free(aux->value);
			free(aux);
			currentnode = currentnode->next;
		}
		free(currentnode);
	}

	free(ht->array);
	free(ht);
}
