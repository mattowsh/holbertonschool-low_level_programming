#include "main.h"

/**
 * _strncpy - Concatenates two strings
 * @src : source of my data
 * @dest : final destiny where I will print my data
 * @n : quantity of chars to be printed
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	/* border case */
	if (n == 0)
		return (dest);

	/* calculates the length of source, without \0 considered */
	/* if str = "" --> i = 0 */
	for (i = 0; src[i]; i++)
		;

	/* cop the n chars */
	for (j = 0; j < n; j++)
	{
		if (j <= i)
			dest[j] = src[j];
		else /* (j > i) */
			dest[j] = '\0';
	}

	return (dest);
}
