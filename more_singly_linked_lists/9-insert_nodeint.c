#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 * @head : the first node
 * @idx : index of the list where the new node should be added
 * @n : node data to be added
 *
 * Return: the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0; /* to control the position of my new node */

	listint_t *currentNode = *head;
	listint_t *newnode = NULL;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;


	if (idx == 0) /* at the beginning */
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	while (currentNode != NULL)
	{
		if (i == idx - 1) /* at the middle */
		{
			newnode->next = (currentNode)->next;
			currentNode->next = newnode;
			return (newnode);
		}
		i++;
	}

	/* at the end */
	newnode->next = NULL;

	return (newnode);
}
