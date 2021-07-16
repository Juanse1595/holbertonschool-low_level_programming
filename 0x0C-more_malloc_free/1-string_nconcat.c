#include <stdlib.h>

/**
 * string_nconcat - concatenates one string with n bytes
 * of a second string
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 * Return: pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
		;
	for (j = 0; s2[j]; j++)
		;
	if (n >= j)
		n = j;
	p = malloc(i + n + 1);
	if (p == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		p[i] = s1[i];
	if (s2[0] == '\0')
	{
		p[i] = '\0';
		return (p);
	}
	for (j = 0; j < n; j++, i++)
		p[i] = s2[j];
	p[i] = '\0';
	return (p);
}
