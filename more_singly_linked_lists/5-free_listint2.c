#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list
 * @head : the first node
 */

void free_listint2(listint_t **head)
{
	listint_t *aux;

	if (*head == NULL)
	{
		aux = *head;
		free(aux);
		return;
	}

	if (*head != NULL)
	{
		aux = *head;
		*head = (*head)->next;
		free(aux);
	}
	aux = *head;
	free(aux);
}
