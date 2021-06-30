#include "holberton.h"
/**
 * puts2 - prints every other char
 * @str: given string
 * Return: void
 */

void puts2(char *str)
{
	int i, j;

	for (i = 0; str[i]; i++)
	{}
	for (j = 0; j < i; j += 2)
		_putchar(str[j]);
	_putchar('\n');
}
