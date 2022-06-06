#include <stdio.h>

/**
 * main -  prints the size of various data types on the computer
 * Return: Always 0 (Success)
 */

int main(void)
{
	char charType;
	int intType;
	long int longType;
	long long int longlongType;
	float floatType;

/* with sizeof evaluates the size of a variable */
	printf("Size of a char: %zu byte(s)\n", sizeof(charType));
	printf("Size of an int: %zu byte(s)\n", sizeof(intType));
	printf("Size of a long int: %zu byte(s)\n", sizeof(longType));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(longlongType));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatType));
}
