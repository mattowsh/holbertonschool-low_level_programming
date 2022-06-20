#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s : string
 * @accept : chars to search
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	for (; s[0]; s++)
	{
		for (i = 0; accept[i]; i++)
		{
			if (s[0] == accept[i])
				return (s);
		}
	}

	return (NULL);
}

