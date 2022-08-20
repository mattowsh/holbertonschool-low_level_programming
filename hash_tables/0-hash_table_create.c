#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 * @size : size of the array
 *
 * Return: a pointer to the newly created hash table, NULL in fail
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	int counter = 0;
	hash_table_t *newtable;

	/* border case */
	if (size <= 0)
		return (NULL);

	/* to create the 1st position of the array */
	newtable = malloc(sizeof(hash_table_t));
	if (!newtable)
		return (NULL);

	newtable->size = size;
	newtable->array = malloc(sizeof(hash_node_t *) * size); /*total memory used*/
	if (!newtable->array)
	{
		free(newtable);
		return (NULL);
	}

	for (; counter < size; counter++)
		newtable[counter] = NULL;

	return (newtable);
}
