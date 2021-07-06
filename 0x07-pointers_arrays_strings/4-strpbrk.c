#include <stddef.h>
/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: given string
 * @accept: array of acceptable chars
 * Return: pointer to the first accepted byte
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accetp[j])
				return (&s[i]);
		}
	}
	return (NULL);
}
