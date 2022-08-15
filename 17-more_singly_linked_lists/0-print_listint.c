#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list
 * @h : the first node
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int i = 0;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}

	/* at this point h = the last node, so, print it */
	printf("%d\n", h->n);

	return (i + 1);
}
