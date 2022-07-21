#include "main.h"

/**
 * dlistint_len - Returns the number of elements in a linked dlistint_t list
 * @h : the first node
 *
 * Return:  the number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	if (!h)
		return (0);

	while (h)
	{
		i++;
		h = h->next;
	}

	return (i++);
}
