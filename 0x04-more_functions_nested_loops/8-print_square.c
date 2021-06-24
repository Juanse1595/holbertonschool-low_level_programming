#include "holberton.h"

/**
 * print_square - print a square made of #
 * @size: the size of the square
 * Return: void
 */

void print_square(int size)
{
	int i = 0, j = 0;

	if (size > 0)
	{
		while (i < size)
		{
			while (j < size)
			{
				_putchar(35);
				j++;
			}
			_putchar('\n');
			i++;
			j = 0;
		}
	}
	else
		_putchar('\n');
}
