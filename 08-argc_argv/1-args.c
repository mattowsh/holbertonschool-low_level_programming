#include <stdio.h>

/**
 * main - Prints the number of arguments passed into it
 * @argc : argument count
 * @argv : argument variable
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", (argc - 1)); /* to denied count the first argument */

	return (0);
}
