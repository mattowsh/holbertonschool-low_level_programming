#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc
 * @b : memory size to allocate
 *
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	/* I want return a pointer to the allocated memory by malloc! */
	void *ar = malloc(b);

	if (ar == NULL)
		exit(98); /* exit(0) only in success case */

	return (ar);
}
