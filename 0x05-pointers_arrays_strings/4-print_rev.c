#include "holberton.h"
/**
 * print_rev - prints in reverse a string
 * @s: given string
 * Return: void
 */

void print_rev(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{}
	i--;
	for (; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
