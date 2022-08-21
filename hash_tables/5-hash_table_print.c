#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht : the hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	char *key, *value;
	int i = 0, array_length = 0, flag = 0;
	hash_node_t *currentnode = NULL;

	if (!ht)
		return;

	array_length = ht->size;
	printf("{}\n{");

	for (; i < array_length; i++)
	{
		currentnode = ht->array[i];

		while (currentnode) /* bc ht->array[i] podria apuntar a NULL*/
		{
			key = currentnode->key;
			value = currentnode->value;

			if (flag != 0)
				printf(", ");
			flag = 1;

			printf("'%s': '%s'", key, value);

			currentnode = currentnode->next;
		}
	}
	printf("}\n");
}
