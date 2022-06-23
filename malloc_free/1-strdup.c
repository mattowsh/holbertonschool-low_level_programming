#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str : string
 *
 * Return: NULL if size = 0, ar otherwise
 */

char *_strdup(char *str)
{
	int i, j;
	char *ar;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++) /* calculates the length of the string */
		;

	ar = malloc(i * sizeof(char));

	if (ar == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		ar[j] = str[j];

	return (ar);
}
