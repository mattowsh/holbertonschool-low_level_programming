#include "lists.h"

/** 
 * print_list - Prints all the elements of a list_t list
 * @h : head node of each list_t
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	unsigned int i = 0;

	if (h == NULL)
		return (0);

	while (h->next != NULL) /* while my node isn't the last */
	{
		if (h->str != NULL)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		i++; /* to calculate the number of nodes */
		h = h->next;
	}

	/* at this point h = the last node, so, print it */
	if (h->str != NULL)
		printf("[%u] %s\n", h->len, h->str);
	else
		printf("[0] (nil)\n");


	return (i + 1); /* to contemplate the last node */
}
