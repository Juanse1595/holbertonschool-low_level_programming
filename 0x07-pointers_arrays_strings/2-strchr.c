#include <stddef.h>
/**
 * _strchr - locates a character in a string
 * @s: given string
 * @c: char to be found
 * Return: ponter to the char or pointer to NULL
 */

char *_strchr(char *s, char c)
{
	int i;
	char *p = NULL;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
		{
			p = &s[i];
			return (p);
		}
	}
	return (p);
}
