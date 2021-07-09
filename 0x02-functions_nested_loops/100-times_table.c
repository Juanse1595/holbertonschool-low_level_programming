#include "holberton.h"
/**
 * print_times_table - print n times table
 * @n: times number
 */

void print_times_table(int n)
{int i = 0, j = 0, m = 1;
	if (n <= 15 && n >= 0)
	{
		while (i < (n + 1))
		{
			while (j < (n + 1))
			{
				m = i * j;
				if (m <= 9)
				{
					_putchar(m + '0');
				}
				else if (m > 9 && m < 100)
				{
					_putchar((m / 10) + '0');
					_putchar((m % 10) + '0');
				}
				else
				{
					_putchar((m / 100) + '0');
					m = m % 100;
					_putchar((m / 10) + '0');
					_putchar((m % 10) + '0');
				}
				if (j < n)
				{
					_putchar(',');
					_putchar(' ');
					if (((j + 1) * i) < 100)
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
}
