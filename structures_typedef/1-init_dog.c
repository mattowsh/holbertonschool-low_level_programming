#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initializes a variable of type struct dog
 * @d : my_dog location
 * @name : dog's name
 * @age : dog's age
 * @owner : owner
 *
 * Return: my_dog location update
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return (NULL);

	d->name = name;
	d->age = age;
	d->owner = owner;
}
