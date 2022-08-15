#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase except q & e, followed by a new line
 * Return: Always 0 (Success)
*/

int main(void)
{
	char L;

	for (L = 'a'; L <= 'z';)
	{
		if (L != 'e' && L != 'q')
		{
			putchar(L);
			L++;
		}
		else
		{
			L++;
		}
	}

	putchar('\n');
	return (0);
}
