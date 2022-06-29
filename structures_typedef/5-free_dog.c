#include "dog.h"
#include <strlib.h>

/**
 * free_dog - Frees dogs
 * @d : new dog
 */

void free_dog(dog_t *d)
{
	free(d->owner);
	free(d->name);
	free(d);
}
