#include "holberton.h"
#include <stdio.h>
/**
 * print_array - prints an array of integers
 * @a: given array
 * @n: given number of elements
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
		printf("%d, ", a[i]);
	printf("%d\n", a[i]);
}
