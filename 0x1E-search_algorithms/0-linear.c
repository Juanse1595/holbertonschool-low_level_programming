#include "search_algos.h"

/**
 * linear_search - Search an element of an array
 * @array: array
 * @size: size of array
 * @value: Value to be found
 * Return: the index of value, or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t idx;

	if (array == NULL)
		return (-1);

	for (idx = 0; idx < size; idx++)
	{
		printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);
		if (array[idx] == value)
			return (idx);
	}
    /* if value not found */
	return (-1);
}
