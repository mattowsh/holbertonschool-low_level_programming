#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer
 */

void jack_bauer(void)
{
	int hd, hu, md, mu;
	int c = '0';
	int maxhu = '9';

	for (hd = '0'; hd <= '2'; hd++)
	{
		for (hu = '0'; hu <= maxhu; hu++)
		{
			for (md = '0'; md <= '5'; md++)
			{
				for (mu = '0'; mu <= '9'; mu++)
				{
					_putchar(hd);
					_putchar(hu);
					_putchar(':');
					_putchar(md);
					_putchar(mu);
					_putchar('\n');
				}
			}
		}
		c++;
		if (c == '2')
		{
			maxhu = '3';
		}
	}
}
