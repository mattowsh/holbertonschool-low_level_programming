#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @src : source of my data
 * @dest : final destiny where I will print my data
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = j = 0;

	/* to check if the variables have available memory */
	if (!dest)
		return (0);
	if (!src)
		return (0);


	while (dest[i]) /* calculates the length of the dest */
		i++;

	while (src[j])
	{
		dest[i] = src[j];
		i++, j++;
	}
	src[j] = '\0';

	return (dest);
}
