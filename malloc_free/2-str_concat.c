#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenates two strings
 * @s1 : string destination
 * @s2 : string to move
 *
 * Return: NULL if size = 0, ar otherwise
 */

char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *ar;

	/* exepciones */
	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	ar = malloc((strlen(s1) + strlen(s2) + 1) * sizeof(char));

	if (ar == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		ar[i] = s1[i];

	for (j = 0; s2[j]; j++, i++)
		ar[i] = s2[j];

	return (ar);
}
