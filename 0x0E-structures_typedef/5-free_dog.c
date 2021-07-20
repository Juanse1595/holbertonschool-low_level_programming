#include <stdlib.h>

/**
 * free_dog - doggo is free
 * @d: dog to be freed
 */

void free_dog(dog_t *d)
{
	free(d);
}
