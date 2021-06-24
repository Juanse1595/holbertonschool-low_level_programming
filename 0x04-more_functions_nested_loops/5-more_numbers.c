#include "holberton.h"

/**
 * more_numbers - prints 10 times the numbers form 0 to 14
 * Return: void
 */

void more_numbers(void)
{
	int i = 0, j = 0;

	while (i < 10)
	{
		while (j < 15)
		{
			if (j > 9)
				_putchar('0' + (j / 10));
			_putchar('0' + (j % 10));
			j++;
		}
		_putchar('\n');
		i++;
		j = 0;
	}
}
