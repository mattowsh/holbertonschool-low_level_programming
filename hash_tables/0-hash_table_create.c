#include "hashtables.h"

/**
 * hash_table_create - Creates a hash table
 * @size : size of the array
 *
 * Return: a pointer to the newly created hash table, NULL in fail
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	int counter = 0;
	hash_node_t *newtable[size];

	for (; counter < size; counter++)
	{
		newtable[counter] = NULL;
	}
}
