#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at index of a doubly linked list
 * @head : pointer to the first node
 * @index : index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head, *aux, *sig;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		sig = current->next;
		free(current);
		if (sig)
			sig->prev = NULL;
		return (1);
	}

	while (current && i < (index - 1))
	{
		current = (current)->next;
		i++;
	}
	if (!current || !((current)->next))
		return (-1);

	sig = current->next;
	aux = sig->next;
	current->next = aux;
	if (aux)
		aux->prev = current;
	free(sig);
	return (1);
}
