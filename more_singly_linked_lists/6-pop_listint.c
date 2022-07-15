#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list
 * @head : the pointer to the first node
 *
 * Return: the head node’s data (n)
 */

int pop_listint(listint_t **head)
{
	int i; /* to save head->n */
	listint_i *aux;

	/* if the linked list is empty */
	if (head == NULL)
		return (0);

	aux = *head;
	i = head->n;

	*head = (aux)->next;
	free(aux);

	return (i);
}
