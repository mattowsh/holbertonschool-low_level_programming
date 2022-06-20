#include "main.h"
#include <stddef.h>

/**
 * _strstr - Finds the first occurrence of the substring needle in the 
 * string haystack
 * @haystack : principal string
 * @needle : substring to locate
 *
 * Return: a pointer to the beginning of the located substring, or NULL if the
 * substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	for (; haystack[0]; haystack++)
	{
		i = 0;
		if (haystack[0] == needle[0])
		{
			while (haystack[i] && needle[i])
			{
				if (haystack[i] != needle[i])
					break;
				i++;
			}
		}
		if (needle[i] == '\0')
			return (haystack);
	}

	return (NULL);
}
