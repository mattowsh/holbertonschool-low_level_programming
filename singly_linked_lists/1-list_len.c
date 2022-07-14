#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list_t list
 * @h : head node of each list_t
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	unsigned int i = 0;

	while (h->next != NULL)
	{
		i++;
		h = h->next;
	}

	return (i + 1) /* to contemplate the last node */
}
