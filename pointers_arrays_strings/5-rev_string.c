#include "main.h"

void rev_string(char *s)
{
	int i = 0, j = 0;
	char temp;

	while (s[j] != '\0')
	{
		j++;
	}

	j--;

	while (i < j)
	{
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;

		i++;
		j--;
	}
}
