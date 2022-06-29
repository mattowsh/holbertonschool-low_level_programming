#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog info
 * @name : dog's name
 * @age : dog's age
 * @owner : owner
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

/* functions */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
