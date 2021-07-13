#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: specigic char
 * Return: pointer to the aray
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
		return (NULL);
	p = malloc(sizeof(*p) * size);
	if (p == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		p[i] = c;
		i++;
	}
	p[i] = '\0';
	return (p);
}
