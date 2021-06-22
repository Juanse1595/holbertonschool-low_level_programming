#include "holberton.h"

/**
 * print_last_digit - Prints last digit of a number
 * @n: given number
 *
 * Description: Prints the last digit  of a given number
 * Return: the last digit
 */

int print_last_digit(int n)
{
	int mod = n % 10;

	if (mod < 0)
		mod *= -1;
	_putchar('0' + mod);
	return (mod);
}
