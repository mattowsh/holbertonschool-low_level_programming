#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars, and initializes it
 * with a specific char
 * @size : array size
 * @c : specific char
 *
 * Return: NULL if size = 0, ar otherwise
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar;

	if (size == 0)
		return (NULL);

	ar = malloc(size * sizeof(char));

	/* if malloc doesn't find avaible space in memory*/
	if (ar == NULL)
		return (NULL);

	for (i = 0; i <= size; i++)
		ar[i] = c;

	return (ar);
}
