#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list
 * @head : the first node
 * @index : node to be returned
 *
 * Return: the nth node of listint_t
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (index < 0)
		return (NULL);

	while (head != NULL)
	{
		if (i == index)
			return (head->n);
		i++;
		head = head->next;
	}

	/* if index node doesn't exist */
	return (NULL);
}
