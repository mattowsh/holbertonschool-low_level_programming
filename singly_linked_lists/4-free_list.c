#include "lists.h"

/**
 * free_list - Frees a list_t list
 * @head : the first node
 */

void free_list(list_t *head)
{
	list_t *aux;

	if (head != NULL)
	{
		while (head->next != NULL)
		{
			aux = head;
			free(head);
			head = head->next;
		}
	/* to free the last node */
		free(head);
	}
}
