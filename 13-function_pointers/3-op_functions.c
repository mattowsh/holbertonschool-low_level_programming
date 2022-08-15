#include "3-calc.h"
#include <stdlib.h>

/**
 * op_add - sum two integers
 * @a : number a
 * @b : number b
 *
 * Return: the result of the sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - difference of two integers
 * @a : number a
 * @b : number b
 *
 * Return: the result of the substraction
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplicate two integers
 * @a : number a
 * @b : number b
 *
 * Return: the product of the multiplication
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division of two integers
 * @a : number a
 * @b : number b
 *
 * Return: the result of the division
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the module of two integers
 * @a : number a
 * @b : number b
 *
 * Return: the result of a%b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
