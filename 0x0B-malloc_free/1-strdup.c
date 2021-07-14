#include <stdlib.h>

/**
 * _strdup - returns a pointer to a copy of str in a
 * allocated space of memory
 * @str: given string
 * Return: pointer to the copy of the string, or NULL
 * if there was no space
 */

char *_strdup(char *str)
{
	int i;
	char *s;

	for (i = 0; str[i]; i++)
	{}
	s = malloc(sizeof(char) * (i + 1));
	for (i = 0; str[i]; i++)
		s[i] = str[i];
	s[i] = '\0';
	return (s);
}
