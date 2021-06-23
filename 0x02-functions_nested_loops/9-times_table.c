#include "holberton.h"

/**
 * times_table - Prints the 9 times table
 * Return: void
 */

void times_table(void)
{
	int i = 0, j = 0, m = 1, num1 = 0, num2 = 0;

	while (i < 10)
	{
		while (j < 10)
		{
			m = i * j;
			if (m <= 9)
			{
				_putchar(m + '0');
			}
			else
			{
				num2 = m % 10;
				num1 = m / 10;
				_putchar(num1 + '0');
				_putchar(num2 + '0');
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
				if (((j + 1) * i) <= 9)
					_putchar(' ');
			}
			j++;
		}
		_putchar('\n');
		i++;
		j = 0;
	}
}
