#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a dlistint_t list
 * @h : the first node
 *
 * Return: the number of nodes
 */


size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	if (h == NULL)
		return (0);

	while (h->next)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}

	printf("%d\n", h->n);
	return (i + 1);
}
