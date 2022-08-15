#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - Creates a new dog structure with new data
 * @name : name's dog
 * @age : age's dog
 * @owner : owner
 *
 * Return: new dog location
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int length_name, length_owner, i;

	dog_t *luna; /* luna = new_dog */

	luna = malloc(sizeof(dog_t));
	if (luna == NULL)
		return (NULL);

	length_name = strlen(name);
	length_owner = strlen(owner);

	luna->name = malloc(length_name + 1);
	if (luna->name == NULL)
	{
		free(luna);
		return (NULL);
	}

	luna->owner = malloc(length_owner + 1);
	if (luna->owner == NULL)
	{
		free(luna->name);
		free(luna);
		return (NULL);
	}

	for (i = 0; i < length_name; i++)
		luna->name[i] = name[i];
	luna->name[i] = '\0';

	for (i = 0; i < length_owner; i++)
		luna->owner[i] = owner[i];
	luna->owner[i] = '\0';

	luna->age = age;
	return (luna);
}
