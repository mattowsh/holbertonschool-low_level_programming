#include <stdio.h>
/**
 * main - Prints all the numbers of base 16 in lowercase followed by a new line
 * Return: Always 0 (Success)
*/

int main(void)
{
	char n;
	char L;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}

	for (L = 'a'; L <= 'f'; L++)
	{
		putchar(L);
	}

	putchar('\n');
	return (0);
}
