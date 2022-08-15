#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked listint_t list
 * @h : the first node
 *
 * Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
	int i = 0;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		i++;
		h = h->next;
	}

	return (i + 1);
}
