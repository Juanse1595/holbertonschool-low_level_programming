#include "holberton.h"

/**
 * jack_bauer - prints every minute from 00:00 to 23:59
 * Return: void
 */

void jack_bauer(void)
{
	int num1 = '0', num2 = '0', num3 = '0', num4 = '0';

	while (num1 < '2')
	{
		while (num2 < '3')
		{
			while (num3 < '5')
			{
				while (num4 < '9')
				{
					_putchar(num1);
					_putchar(num2);
					_putchar(':');
					_putchar(num3);
					_putchar(num4);
					_putchar('\n');
					num4++
				}
				num3++;
				num4 = '0';
			}
			num2++;
			num3 = '0';
			num4 = '0';
		}
		num1++;
		num2 = '0';
		num3 = '0';
		num4 = '0';
	}
}
