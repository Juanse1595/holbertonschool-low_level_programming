#include "holberton.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 * Description: Prints the alphabet 10 times with a new line
 * between each one
 * Return: zero if success
 */

void print_alphabet_x10(void)
{
	char letter = 'a';
	int i = 0;

	while (i < 10)
	{
		while (letter < 123)
		{
			_putchar(letter);
			letter++;
		}
		i++;
		letter = 'a';
		_putchar('\n');
	}
}
