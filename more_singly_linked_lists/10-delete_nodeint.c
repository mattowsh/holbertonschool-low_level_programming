#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at index of a linked list
 * @head : the first node
 * @index : index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;

	listint_t *currentNode = *head;
	listint_t *aux;

	if (index == 0)
	{
		*head = currentNode->next;
		free(currentNode);
	}

	while (currentNode != NULL && i < (index - 1))
	{
		currentNode = (currentNode)->next;
		i++;
	}

	if (currentNode == NULL)
		return (-1);

	if ((currentNode)->next == NULL)
		return (-1);

	aux = currentNode->next;
	currentNode->next = aux->next;
	free(aux);
	return (1);
}
