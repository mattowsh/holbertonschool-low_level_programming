#include "lists.h"

/**
 * free_listint - Frees a listint_t list
 * @head : the first node
 */

void free_listint(listint_t *head)
{
	listint_t *aux;

	aux = head;

	if (head == NULL)
	{
		free(head);
		return;
	}

	while (aux->next != NULL)
	{
		free(aux);
		aux = aux->next;
	}
	free(aux);
}
