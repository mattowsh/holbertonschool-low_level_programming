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

	newnode = malloc(sizeof(dlistint_t));
	if (!newnode)
		return (0);

	newnode->n = n;

	if (*head)
	{
		newnode->next = *head;
		*head = newnode;
		newnode->prev = NULL;
	}
	else
	{
		*head = newnode;		
		newnode->prev = NULL;
	}

	return (newnode);
}
