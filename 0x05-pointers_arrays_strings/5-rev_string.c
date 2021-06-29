#include "holberton.h"
/**
 * rev_string - reverse a string
 * @s: given string
 * Return: void
 */

void rev_string(char *s)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{}

	char a[i];

	i--;
	for (j = 0; i >= 0; i--, j++)
		a[j] = s[i];
	for (i = 0; s[i]; i++)
		s[i] = a[i];
}
