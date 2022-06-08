#include "main.h"
/**
 * main - Prints _putchar, followed by a new line
 * Return: Always 0 (Success)
*/

int main(void)
{
	char string[9] = "_putchar";
	/* always add +1 in array: correspond with null char at the end of strings*/
	int i;

	for (i = 0; i <= 7; i++)
	{
		_putchar(string[i]);
	}

	_putchar('\n');
	return (0);
}
