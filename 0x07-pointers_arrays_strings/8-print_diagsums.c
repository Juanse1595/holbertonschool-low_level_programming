#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of
 * a square matrix of integers
 * @a: given matrix
 * @size: size of the matrix
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, sum1, sum2;

	sum1 = 0;
	sum2 = 0;
	for (i = 0; i < size; i++)
		sum1 += a[i * (size + 1)];
	printf("%d, ", sum1);
	i = size - 1;
	while (i < (size * size) - (size - 1))
	{
		sum2 += a[i];
		i += (size - 1);
	}
	printf("%d\n", sum2);
}
