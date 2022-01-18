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
		if (array[idx] == value)
			return (idx);
	}
    /* if value not found */
	return (-1);
}

/**
 * print_array - Prints the numbers of the input array
 * @array: array
 * @size: size of array
 */
void print_array(int *array, size_t size)
{
    size_t idx;
    printf("Searching in array: ");
    for (idx = 0; idx < size - 1; idx++)
    {
        printf("%d, ", array[idx]);
    }
    printf("%d\n", array[idx]);
}

/**
 * binary_search_2 - Search if element is in the array using
 * binary search algorithm
 * @array: array
 * @size: size of array
 * @value: Value to be found
 * Return: any number if found, or -1 if not found
 */
int binary_search_2(int *array, size_t size, int value)
{
    size_t idx;
    
    if (size % 2 == 0)
        idx = (size / 2) - 1;
    else
        idx = size / 2;
    print_array(array, size);
    if (array[idx] == value)
        return (idx);
    else if (size == 1)
        return (-1);
    else if (array[idx] > value)
        return (binary_search_2(&array[0], (size / 2) - 1, value));
    else if (array[idx] < value)
        return (binary_search_2(&array[idx + 1], size / 2, value));
    return (-1);
}

/**
 * binary_search - Return the index of the value with linear
 * search algorithm
 * @array: array
 * @size: size of array
 * @value: Value to be found
 * Return: the index of value, or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
    int result;
    if (array == NULL)
        return (-1);
    result = binary_search_2(array, size, value);
    if (result == -1)
        return (-1);
    return linear_search(array, size, value);
}
