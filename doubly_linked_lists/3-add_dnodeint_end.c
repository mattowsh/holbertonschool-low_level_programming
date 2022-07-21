#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list
 * @head : pointer to the first node
 * @n : int to be added to the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode;
	dlistint_t *aux;

	newnode = malloc(sizeof(dlistint_t));
	if (!newnode)
		return (0);

	newnode->n = n;

	if (*head)
	{
		aux = *head;
		while (aux->next)
			aux = aux->next;
		newnode->prev = aux;
		aux->next = newnode;
	}
	else
	{
		*head = newnode;
		newnode->prev = NULL;
	}

	newnode->next = NULL;

	return (newnode);
}
