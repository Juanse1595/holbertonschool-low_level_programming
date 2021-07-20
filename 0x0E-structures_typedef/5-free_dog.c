#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - doggo is free
 * @d: dog to be freed
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
