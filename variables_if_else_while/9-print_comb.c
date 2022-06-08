#include <stdio.h>
/**
 * main - Prints  all possible combinations of single-digit numbers
 * Return: Always 0 (Success)
*/

int main(void)
{
/* Putchar prints a character by ASCII code if you don't put numbers in simple-quotes */
	int n = '0';

	while (n <= '9')
	{
		putchar(n);

		if (n != '9')
		{
			putchar(',');
			putchar(' ');
		}

		n++;
	}

	putchar('\n');
	return (0);
}

