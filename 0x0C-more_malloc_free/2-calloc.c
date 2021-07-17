#include <stdlib.h>
#include <string.h>

/**
 * _calloc - imitates calloc
 * @nmemb: number of elements
 * @size: size of each element
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int i;

	i = 0;
	p = NULL;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		*((char *)p + i) = 0;
	return (p);
}
