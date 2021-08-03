#include <stdlib.h>

/**
 * _realloc - imitates realloc
 * @ptr: pointer to the memory
 * @old_size: old size of the memory
 * @new_size: new size of the memory
 * Return: pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	unsigned int i;

	p = NULL;

	p = malloc(new_size);
	if (p == NULL)
		return (NULL);

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			p[i] = ptr[i];
	}
	else
	{
		for (i = 0; i < old_size; i++)
			p[i] = ptr[i];
	}

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (ptr);
	}

	if (new_size == old_size)
		return (ptr);
	return (p);
}
