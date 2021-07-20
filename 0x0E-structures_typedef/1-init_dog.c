#include "dog.h"

/**
 * init_dog - initialize a dog struct
 * @d: the address of my_dog
 * @name: name of my_dog
 * @age: age of my_dog
 * @owner: owner of my_dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	d->owner = owner;
}
