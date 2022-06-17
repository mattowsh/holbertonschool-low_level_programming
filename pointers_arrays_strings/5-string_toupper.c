#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase
 * @str : string
 *
 * Return: string with uppercase letters
 */

char *string_toupper(char *str)
{
	int i = 0;

	for (i = 0; str[i]; i++)
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
	return (str);
}
