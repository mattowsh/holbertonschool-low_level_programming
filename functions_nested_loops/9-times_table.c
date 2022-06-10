#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0
 * Return: Always 0 (Success)
 */

void times_table(void)
{
	int n, N, first, second;
	int counter = '0';

	for (counter = 0; counter <= 9; counter++)
	{
		for (n = 0; n <= 9; n++)
		{
			N = n * counter;
			first = (N / 10 + '0');
			second = (N % 10 + '0');

			if (N >= 10)
			{
				_putchar(first);
				_putchar(second);
			}
			else if (n != 0)
			{
				_putchar(' ');
				_putchar(N + '0');
			}
			else
			{
				_putchar(N + '0');
			}

			if (n != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('\n');
			}
		}
	}
}

