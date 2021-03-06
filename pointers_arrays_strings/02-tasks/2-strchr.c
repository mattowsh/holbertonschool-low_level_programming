#include "main.h"
#include <stddef.h>

/**
 * _strchr - Locates a character in a string
 * @s : string
 * @c : char to locate
 *
 * Return: a pointer to the first occurrence of the char c in the string s,
 * or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	for (; s[0]; s++) /* s++: move the pointer */
	{
		if (s[0] == c) /* s[0] is always the value that the pointer marks */
			return (s);
	}

	/* case: char to locate: void: the pointer is on the \0 of my string */
	if (c == '\0')
		return (s);

	return (NULL);
}
