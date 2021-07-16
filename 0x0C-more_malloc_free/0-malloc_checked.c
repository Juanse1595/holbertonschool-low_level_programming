#include <stdlib.h>

/**
 * malloc_checked - uses malloc to allocate memory checking
 * it first and using exit in case of failure
 * @b: size of the memory to be allocated
 * Return: pointer of any type
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = NULL;
	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
