#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list
 * @head : th first node
 * @str : string to be added to the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int i = 0;

	list_t *newnode = NULL;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

	/* to calculate the length of the string */
	while (str != '\0')
		i++;

	newnode->str = strdup(str);
	newnode->len = i;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
