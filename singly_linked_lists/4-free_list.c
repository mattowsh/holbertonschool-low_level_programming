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
		aux = *head;
		while (aux->next != NULL)
		{
			free(head);
			head = head->next;
		}
	/* to free the last node */
		free(head);
	}
}
