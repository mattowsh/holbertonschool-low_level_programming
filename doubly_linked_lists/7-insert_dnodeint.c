#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h : pointer to the first node
 * @idx : index of the list where the new node should be added
 * @n : int to add at the new node
 *
 * Return: the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode;
	dlistint_t *aux = *h, *sig;
	unsigned int i = 0;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode)
		return (NULL);
	newnode->n = n;

	/* at the beginning */
	if (!(*h) || !h || idx == 0)
		return (add_dnodeint(h, n));

	while (aux && i < idx)
	{
		aux = (aux)->next;
		if (aux == NULL)
			return (NULL);
		i++;
	}

	/* at the end */
	if (aux->next == NULL)
		return (add_dnodeint_end(h, n));


	sig = (aux)->next;
	newnode->next = sig;
	aux->next = newnode;
	newnode->prev = aux;
	sig->prev = newnode;

	return (newnode);
}
