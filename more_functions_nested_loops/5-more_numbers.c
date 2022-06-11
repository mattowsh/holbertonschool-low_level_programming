#include "main.h"

/**
 * more_numbers - Prints 10 times the numbers from 0 to 14
 */

void more_numbers(void)
{
	int counter, n, lastDigit;

	/* to print 10 times the sequencie */
	for (counter = 48; counter <= 57; counter++)
	{
		/* numbers from 0 to 9: only lastDigit */
		for (n = 48; n <= 57; n++)
		{
			_putchar(n);
		}

		/* numbers from 10 to 14: firstDigit + lastDigit */
		for (lastDigit = 48; lastDigit <= 52; lastDigit++)
		{
			_putchar(49); /* correspond to firstDigit = 1 */
			_putchar(lastDigit);
		}

		/* final new line */
		_putchar('\n');
	}
}
