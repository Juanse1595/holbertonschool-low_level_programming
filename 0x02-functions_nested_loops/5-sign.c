#include "holberton.h"

/**
 * print_sign - Tells if a number is greater, equal or less
 * than zero
 * @n: the given number
 *
 * Description: Prints + if the number is greater than zero,
 * 0 if it's 0 and - if it is less than zero
 * Return: 1 if n is greater than 0, 0 if 0 and -1 if is less
 * than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
