#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s : string
 * @accept : chars to search
 *
 * Return: the number of bytes in the initial segment of s which consist only
 * of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}

		if (!accept[j])
			return (i);
	}

	return (i);
}
