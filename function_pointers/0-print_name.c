#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Prints a name
 * @name: name
 * @f : function to referenciate
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	
	f(name);
}
