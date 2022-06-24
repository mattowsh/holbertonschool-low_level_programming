#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array
 * @nmemb : quantity of elements of the array
 * @size : size (in bytes) of any nmemb element
 *
 * Return: a pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ar;

	/* exceptions */
	if (nmemb == 0 || size == 0)
		return (NULL);

	ar = malloc(nmemb * size);
	if (ar == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		ar[i] = 0;

	return (ar);
}
