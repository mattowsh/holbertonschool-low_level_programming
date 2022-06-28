#ifndef DOG_H
#define DOG_H

/* functions */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * struct dog - dog info
 * @name : dog's name
 * @age : dog's age
 * @owner : owner
 *
 */

struct dog_t
{
	char *name;
	float age;
	char *owner;
};

#endif
