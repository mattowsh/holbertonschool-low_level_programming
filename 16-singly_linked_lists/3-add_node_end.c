#include "lists.h"
#include <string.h>

/**
 * add_node_end - Add a new node at the end of a list_t list
 * @head : the first node
 * @str : string to be added to the new node
 *
 * Return: the adress of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int i = 0;
	char *duplicated = strdup(str);

	list_t *newnode = NULL;
	list_t *aux;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

	/* calculated the length of the string */
	while (str[i] != '\0')
		i++;

	newnode->str = duplicated;
	newnode->len = i;
	newnode->next = NULL;

	/* changes the "next" of the last node to newnode */
	if (*head == NULL)
		*head = newnode;
	else
	{
		aux = *head;
		while (aux->next != NULL)
			aux = aux->next;
		aux->next = newnode;
	}

	return (newnode);
}
