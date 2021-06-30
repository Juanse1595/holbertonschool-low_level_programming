#include "holberton.h"
/**
 * puts_half - prints half of the string
 * @str: given string
 * Return
 */

void puts_half(char *str)
{
	int i, j;

	for (i = 1; str[i]; i++)
	{}
	j = (i - 1) / 2;
	while (j < i)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
