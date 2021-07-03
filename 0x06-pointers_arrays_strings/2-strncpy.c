#include "holberton.h"
/**
 * _strncpy - copies n bytes of src to dest
 * @dest: destiny string
 * @src: source string
 * @n: number of bytes to be copied
 * Return: a pointer to the strart of dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *aux = dest;
	int i;

	for (i = 0; s[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (aux);
}
