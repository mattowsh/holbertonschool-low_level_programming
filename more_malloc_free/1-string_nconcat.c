#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1 : string 1
 * @s2 : string 2
 * @n : number of chars of s2 to concatenate with s1
 *
 * Return: strings concatenated
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *ar;

	/* exceptions */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= strlen(s2))
		n = strlen(s2);


	ar = malloc((strlen(s1) + n + 6) * sizeof(char)); /*considered the final \0*/
	if (ar == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		ar[i] = s1[i];
	for (j = 0; j < n; j++, i++)
		ar[i] = s2[j];

	ar[i] = '\0';

	return (ar);
}
