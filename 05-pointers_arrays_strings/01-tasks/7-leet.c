#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @str : string
 *
 * Return: encode string
 */

char *leet(char *str)
{
	char replace[20] = "aAeEoOtTlL4433007711"; /* leet 1337 */
	int i, j;

	for (i = 0; str[i]; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == replace[j])
			{
				str[i] = replace[j + 10];
			}
		}
	}

	return (str);
}
