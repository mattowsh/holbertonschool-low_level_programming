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
	while (src[i])
		i++;


	if (i < n)
	{
		n = i;
		for (; j < n; j++)
			dest[j] = src[j];

		dest[j] = '\0';
	}


	return (dest);
}	
