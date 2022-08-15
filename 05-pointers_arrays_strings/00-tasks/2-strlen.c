#include <stdio.h>

/**
 * _strlen - Returns the length of a string
 * @s : string characters
 * Return: length of the string
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		s++;
		length++;
	}

	return (length);
}

