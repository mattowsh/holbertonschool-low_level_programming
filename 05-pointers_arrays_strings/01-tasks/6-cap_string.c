#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @str : string
 *
 * Return: string with capitalizes words
 */

char *cap_string(char *str)
{
	char separator[15] = " \n,;.!?\"(){}	"; /* separators */
	int i, j;

	/* border case */
	if (str[0] >= 97 && str[0] <= 122)
		str[0] = str[0] - 32;


	for (i = 0; str[i + 1]; i++)
	{
		for (j = 0; separator[j]; j++)
		{
			if (str[i] == separator[j])
			{
				if (str[i + 1] >= 97 && str[i + 1] <= 122) /* lowercase */
				{
					str[i + 1] = str[i + 1] - 32;
				}
			}
		}
	}

	return (str);
}
