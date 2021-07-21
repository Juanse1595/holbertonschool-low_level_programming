#include <stdlib.h>

/**
 * array_iterator - executes diferent functions
 * @array: array to be used
 * @size: size of array
 * @action: function to be called
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
