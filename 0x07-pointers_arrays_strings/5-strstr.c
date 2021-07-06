#include <stddef.h>
/**
 * _strstr - locates a substring
 * @haystack: main string
 * @needle: substring to be found
 * Return: pointer to the substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, sum;
	char *aux;

	for (i = 0; haystack[i]; i++)
	{
		sum = 0;
		aux = &haystack[i];
		for (j = 0; needle[j]; j++)
		{
			if (haystack[j] == '\0')
				return (NULL);
			sum = sum + haystack[i + j] - needle[j];
		}
		if (sum == 0)
			return (aux);
	}
	return (NULL);
}
