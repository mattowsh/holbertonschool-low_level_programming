#include "lists.h"

/**
 * free_list - Frees a list_t list
 * @head : the first node
 */

void free_list(list_t *head)
{
	if (head != NULL)
		free(head);
}
