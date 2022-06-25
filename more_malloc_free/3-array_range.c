#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers
 * @min : integer min
 * @max : integer max
 *
 * Return: array of integer from min to max
 */

int *array_range(int min, int max)
{
	int i, j;
	int *ar;

	if (min > max)
		return (NULL);

	ar = malloc(((max - min) + 1) * sizeof(int));
	if (ar == NULL)
		return (NULL);

	for (j = 0, i = min; i <= max; j++, i++)
		ar[j] = i;

	return (ar);
}
