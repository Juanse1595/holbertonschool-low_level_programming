#include "holberton.h"

/**
 * print_alphabet - prints the alphabet
 * Description: Prints the alphabet in lowercase, using the function
 * _putchar.
 * Return: nothing, olny prints
 */

void print_alphabet(void)
{
	char letter = 'a';
	while (letter < 123)
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
	return;
}
