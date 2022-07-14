#include "lists.h"

/**
 * free_list - Frees a list_t list
 * @head : the first node
 */

void free_list(list_t *head)
{
	list_t *aux;
	aux = head;

	if (head == NULL)
	{
		free(head);
		return;
	}
	else
	{
		while (aux->next != NULL)
		{
			free(aux->str);
			free(aux);
			aux = aux->next;
		}
		free(aux->str);
		free(aux);
	}
}
