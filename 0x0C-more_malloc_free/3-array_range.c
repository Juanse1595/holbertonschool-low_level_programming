#include <stdlib.h>

/**
 * array_range - creates an array of int from min to max
 * @min: first number
 * @max: last number
 * Return: pointer to the array
 */

int *array_range(int min, int max)
{
	int *p;
	int i;

	p = NULL;
	if (min > max)
		return (NULL);
	p = malloc((max - min + 1) * sizeof(int));
	for (i = 0; i < (max - min + 1); i++)
		p[i] = min + i;
	return (p);
}
