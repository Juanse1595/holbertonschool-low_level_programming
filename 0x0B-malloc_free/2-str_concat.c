#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	int s1i, s1f, s2i, s2f;
	char *s;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (s1f = 0; s1[s1f]; s1f++)
		;
	for (s2f = 0; s2[s2f]; s2f++)
		;
	s = malloc(sizeof(*s1) * (s1f + s2f + 1));
	if (s == NULL)
		return (NULL);
	for (s1i = 0; s1i < s1f; s1i++)
		s[s1i] = s1[s1i];
	for (s2i = 0; s2i < s2f; s1i++, s2i++)
		s[s1i] = s2[s2i];
	s[s1i] = '\0';
	return (s);
}
