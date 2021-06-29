#include "holberton.h"
/**
 * rev_string - reverse a string
 * @s: given string
 * Return: void
 */

void rev_string(char *s)
{
	int i, j;
	char tmp;

	for (i = 0; s[i]; i++)
	{}

	i--;
	for (j = 0; j < i; j++, i--)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
	}
}
