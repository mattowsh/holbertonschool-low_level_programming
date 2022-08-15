#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list
 * @head : the first node
 */

void free_listint2(listint_t **head)
{
	listint_t *currentNode;
	listint_t *nextNode;

	if (head == NULL)
		return;

	currentNode = *head;

	while (currentNode != NULL)
	{
		nextNode = (currentNode)->next;
		free(currentNode);
		currentNode = nextNode;
	}

	*head = NULL;
}
