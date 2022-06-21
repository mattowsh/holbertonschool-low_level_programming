#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1 : string 1
 * @s2 : string 2
 *
 * Return: diff between s2 and s2
 */

int _strcmp(char *s1, char *s2)
{
	int i, dif; /* difference between s1 and s2 */

	dif = 0;
	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		dif = s1[i] - s2[i];
		if (dif != 0)
			break;
	}
	return (dif);
}
