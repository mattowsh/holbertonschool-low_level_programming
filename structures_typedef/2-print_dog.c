#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - Prints a struct dog
 * @d : location of structu dog
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name)
		printf("Name: %s\n", d->name);
	else
		printf("%p\n", d->name); /*bc name is a pointer*/

	if (d->age)
		printf("Age: %f\n", d->age);
	else if (d->age == 0)
		printf("%f\n");
	else
		printf("(neil)\n");

	if (d->owner)
		printf("Owner: %s\n", d->owner);
	else
		printf("%p\n", d->owner); /*bc owner is a pointer*/
}
