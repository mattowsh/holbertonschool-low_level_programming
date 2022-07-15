#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list
 * @head : the pointer to the first node
 *
 * Return: the head node’s data (n)
 */

int pop_listint(listint_t **head)
{
	/* if the linked list is empty */
	if (head == NULL)
		return (0);

	listint_t *aux; /* to save head->n */
	listint_t *newHead;

	aux->n = head->n;
	newHead = *head;

	free(newHead);
	*head = (newHead)->next;

	return (aux->n);
}
