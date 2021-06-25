#include "holberton.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
	int i = 0, j = 0;

	while (i < size)
	{
		while (j < size - i - 1)
		{
			_putchar(' ');
			j++;
		}
		while (j < size)
		{
			_putchar(35);
			j++;
		}
		_putchar('\n');
		j = 0;
		i++;
	}
}
