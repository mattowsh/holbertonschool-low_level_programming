#include <unistd.h> /* linked to a specific library */

/**
 * main - displays the string to the standard error
 * Return: Always 1 (Success)
 */

int main(void)
{
	char ST[59] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, ST, 59);
	/* 1st: for stderr; 2nd: string; 3rd: number of chars(bytes) in the string */

	return (1);
}
