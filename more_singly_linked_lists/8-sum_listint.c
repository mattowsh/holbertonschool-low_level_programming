#include "lists.h"

/**
 * sum_listint - Sums of all the data (n) of a listint_t linked list
 * @head : the first node
 *
 * Return: the result of the sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0; /* to sum all nodes data */

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
