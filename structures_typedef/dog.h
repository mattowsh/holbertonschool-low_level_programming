#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog info
 * @name : dog's name
 * @age : dog's age
 * @owner : owner
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
