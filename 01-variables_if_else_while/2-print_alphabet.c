#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase, followed by a new line
 * Return: Always 0 (Success)
*/

int main(void)
{
	char L;

	for (L = 'a'; L <= 'z' ; L++)
	{
		putchar(L);
	}

	putchar('\n');
	return (0);
}
