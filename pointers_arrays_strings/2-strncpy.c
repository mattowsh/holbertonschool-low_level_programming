#include "main.h"

/**
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j;
	i = j = 0;

	/* to check if the variables have available memory */
	if (!dest)
		return (0);
	if (!src)
		return (0);

	/* calculates the length of source */
	for (i = 0; src[i]; i++)
		;

	if (n == 0 || src[0] == '\0')
		return (dest);
	
	if (i < n)
		n = i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}

