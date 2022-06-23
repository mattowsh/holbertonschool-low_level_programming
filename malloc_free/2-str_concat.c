#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1 : string destination
 * @s2 : string to move
 *
 * Return : NULL if size = 0, ar otherwise
 */

char *str_concat(char *s1, char *s2)
{
	int length, i, j;
	char *ar;

	/* exepciones */
	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	/*calculate length of s1 + s2*/
	for (length = 0; s1[length]; length++)
		;
	for (; s2[length]; length++)
		;

	ar = malloc(length + 1 * sizeof(char));

	if (ar == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		ar[i] = s1[i];

	for (j = 0; s2[j]; j++, i++)
		ar[i] = s2[j];

	return (ar);
}
