#include <stdio.h>

/**
 * main - Prints all arguments it receives
 * @argc : argument count
 * @argv : argument variable
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int i;

	(void) argc;

	for (i = 0; argv[i]; i++)
		printf("%s\n", (argv[i]));

	return (0);
}
