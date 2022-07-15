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
	unsigned int i = 0; /* to controle the position of my new node */

	listint_t *currentNode;
	listint_t *newnode = NULL;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;

	currentNode = *head;
	while (currentNode != NULL)
	{
		if (idx == 0) /* at the beginning */
		{
			newnode = add_nodeint(listint_t **newnode, const int n);
			return (newnode);
		}

		if (i == idx - 1) /* at the middle */
		{
			currentNode->next = newnode;
			newnode->next = (currentNode)->next;
			return (newnode);
		}

		i++;
		currentNode = (currentNode)->next;
	}

	/* at the end */
	newnode = add_nodeint_end(listint_t **newnode, const int n);
	return (newnode);
}
