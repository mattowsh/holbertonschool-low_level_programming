#include "lists.h"

/**
 * free_dlistint - Ffrees a dlistint_t list
 * @head : the first node
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux = head;

	if (!head)
		free(aux), exit(1);
	
	while (aux->next)
		free(aux), aux = aux->next;

	free(aux);
}
