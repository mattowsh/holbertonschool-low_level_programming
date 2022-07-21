#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list
 * @head : pointer to the first node
 * @n : int to be added
 *
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;
	dlistint_t *aux;

	newnode = malloc(sizeof(dlistint_t));
	if (!newnode)
		return (0);

	aux = *head;

	newnode->n = n;
	newnode->next = *head;
	aux->prev = newnode;
	*head = newnode;
	newnode->prev = NULL;

	return (newnode);
}
