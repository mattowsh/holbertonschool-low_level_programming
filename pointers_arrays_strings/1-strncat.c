#include "main.h"

/**
 * _strncat - Concatenates two strings
 *
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = j = 0;

	/* to check if the variables have available memory */
	if (!dest)
		return (0);
	if (!src)
		return (0);

	
	if (dest[i] == '\0' || src[j] == '\0')
		return (dest);
	else if (n > 0)
	{
		while (dest[i]) /* calculates the length of the dest */
			i++;		
		for (; j < n; j++, i++)
			dest[i] = src[j];
		
		dest[i] = '\0';
	}


	return (dest);
}
