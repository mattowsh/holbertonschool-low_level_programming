#include "main.h"

/**
 * more_numbers - Prints 10 times the numbers from 0 to 14
 */

void more_numbers(void)
{
	int counter, n;

	for (counter = 0; counter <= 10; counter++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
			{
				_putchar(n / 10 + '0'); /* to obtain the first digit */
			}
			_putchar(n % 10 + '0'); /* to obtain the last digit */

		}
		_putchar('\n');
	}
}
